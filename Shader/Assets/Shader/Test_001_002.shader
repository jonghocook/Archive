Shader "Custom/test_001_002"
{
    Properties
    {
        _MainTex ("Main Texture", 2D) = "white"{}
    }

    SubShader
    {
        Tags {"RenderType" = "Opaque"}
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float4 _ScrollSpeeds;

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

            v2f vert(appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv - 0.5f;
                UNITY_TRANSFER_FOG(o, o.vertex);
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                float2 polar = float2 (atan2(i.uv.y, i.uv.x) / (1.0f * 3.151592653589f), lengh(i.uv));
                polar *= _MainTex_ST.xy;
                polar += _ScrollSpeeds.xy + _Time.x;
                fixed4 col = tex2D(_MainTex, polar);
                UNITY_APPLY_FOG(i.fogcoord, col);
                return col;
            }
            ENDCG
        }
    }
}