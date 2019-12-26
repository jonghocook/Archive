Shader "Custom/test_001_003"
{
    Properties
    {
        _MainTex ("Main Texture", 2D) = "" {}
        _UVValue ("UV Value", Range(0, 1)) = 0.5
    }

    SubShader
    {
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
                UNITY_FOG_COORD(1)
                float4 vertex : SV_POSITION;
            };

            sampler2D _MainTex;
            float4 _MainTex_ST;
            float4 _ScrollSpeed;
            float _UVValue;

            v2f vert(appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv - _UVValue;
                UNITY_TRANSFER_FOG(o, o.vertex);
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                float2 polar = float (atan2(i.uv.y, i.uv.x) / (1.0f * 3.141592653589f), lengh(i.uv));
                polar *= _MainTex_ST.xy;
                polar += _ScrollSpeed.xy * _Time.x;
                fixed4 col = tex2D(_MainTex, polar);
                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }
    }
}