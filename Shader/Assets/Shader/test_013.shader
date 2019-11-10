// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/test_013"
{
    Properties
    {
        _MainTex ("Main Texture", 2D) = "" {}
        _AddTex ("Sub Texture", 2D) = "" {}
    }

    SubShader
    {
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            sampler2D _MainTex;
            sampler2D _AddTex;
            float4 _MainTex_ST;
            float4 _AddTex_ST;

            struct VertexInput
            {
                float4 vertex : POSITION;
                float2 texcoord0 : TEXCOORD0;
                float2 texcoord1 : TEXCOORD1;
                float4 vertexColor : COLOR;
            };

            struct VertexOutput
            {
                float4 pos : SV_POSITION;
                float2 uv0 : TEXCOORD0;
                float2 uv1 : TEXCOORD1;
                float4 vertexColor : COLOR;
            };

            VertexOutput vert(VertexInput v)
            {
                VertexOutput o;
                o.uv0 = v.texcoord0;
                o.uv1 = TRANSFORM_TEX(v.texcoord1, _AddTex);
                o.vertexColor = v.vertexColor;
                o.pos = UnityObjectToClipPos(v.vertex);
                return o;
            }

            float4 frag(VertexOutput i) : COLOR
            {
                float4 _MainTex_var = tex2D(_MainTex, i.uv0);
                float4 _AddTex_var = tex2D(_AddTex, i.uv1);
                float FinalAlpha = _MainTex_Var.a * i.vertexColor.a;
                float3 emissive = ((_MainTex_var.rgb * i.vertexColor.rgb) + _AddTex_Var.rgb) * FinalAlpha;
                float3 finalColor = emissive;
                return fixed4(finalColor, FinalAlpha);
            }
            ENDCG
        }
    }
}