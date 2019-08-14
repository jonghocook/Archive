Shader "Custom/Rim_2"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white"{}
        _BumpMap ("Normal Map", 2D) = "bump"{}
        _RimPower ("Rim Power", Range(1, 10)) = 3
        _RimColor ("Rim Color", Color) = (1, 1, 1, 1)
    }

    SubShader
    {
        Tags {"RenderType" = "Opaque"}

        CGPROGRAM
        #pragma surface surf Lambert //noambient

        sampler2D _MainTex;
        sampler2D _BumpMap;
        float4 _RimColor;
        float _RimPower;

        struct Input
        {
            float2 uv_MainTex;
            float2 uv_BumpMap;
            float3 viewDir;
        };

        void surf (Input IN, inout SurfaceOutput o)
        {
            fixed4 c = tex2D (_MainTex, IN.uv_MainTex);
            o.Albedo = c.rgb;
            o.Normal = UnpackNormal (tex2D (_BumpMap, IN.uv_BumpMap));
            float rim = saturate (dot(o.Normal, IN.viewDir));
            o.Emission = pow (1 - rim, _RimPower) * _RimColor.rgb;
            o.Alpha = c.a;
        }
        ENDCG
    }
    FallBack "Diffuse"
}