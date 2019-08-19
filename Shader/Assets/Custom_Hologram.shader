Shader "Custom/hologram"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white"{}
        _BumpMap ("Normal Map", 2D) = "bump" {}
        _RimPower ("RimPower", Range(0, 10)) = 3
    }

    SubShader
    {
        Tags {"RenderType" = "Transparent" "Queue" = "Transparent"}

        CGPROGRAM
        #pragma surface surf nolight noambient alpha:fade

        sampler2D _MainTex;
        sampler2D _BumpMap;
        float _RimPower;

        struct Input
        {
            float2 uv_MainTex;
            float2 uv_NormalMap;
            float3 viewDir;
            float3 worldPos;
        };

        void surf (Input IN, inout SurfaceOutput o)
        {
            fixed4 c = tex2D (_MainTex, IN.uv_MainTex);
            //o.Albedo = c.rgb;
            o.Normal = UnpackNormal (tex2D (_BumpMap, In.uv_NormalMap));
            o.Emission = float3 (0, 1, 0);
            float rim = saturate (dot (o.Normal, IN.viewDir));
            rim = saturate (pow (1 - rim, _RimPower) + pow (frac (IN.worldPos.g * 3 - Time.y), 5) * 0.1);
            o.Alpha = rim;
        }

        float4 Lightingnolight (SurfaceOutput s, float3 lightDir, float atten)
        {
            return float4 (0, 0, 0, s.Alpha);
        }
        ENDCG
    }
    FallBack "Transparent/Diffuse"
}