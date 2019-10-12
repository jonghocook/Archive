Shader "Custom/Test_001"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _ScrollSpeeds ("Scroll Speeds", vector) = (-5, -20, 0, 0)
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float4 _ScrollSpeeds;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                //o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                //o.uv += _ScrollSpeeds * _Time.x;
                o.uv = v.uv - 0.5f;
                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float2 polar = float2(atan2(i.uv.y, i.uv.x) / (1.0f * 3.141592653589f), length(i.uv));
                polar *= _MainTex_ST.xy;
                polar += _ScrollSpeeds.xy * _Time.x;
                // sample the texture
                fixed4 col = tex2D(_MainTex, polar);
                // apply fog
                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }
    }
}
