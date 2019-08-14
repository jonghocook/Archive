Shader "Custom/holo"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white"{}
        //_BumpMap ("NormalMap", 2D) = "bump"{}
        //_RimColor ("Rim Color", Color) = (1, 1, 1, 1)
        _RimPower ("Rim Power", Range(1, 10)) = 3
        //_AlphaTime ("AlphaTime", Range(0, 3)) = 3
    }

    SubShader
    {
        Tags {"RenderType" = "Transparent" "Queue" = "Transparent"}

        CGPROGRAM
        #pragma surface surf Lambert noambient alpha:fade

        sampler2D _MainTex;
        //sampler2D _BumpMap;
        //float4 _RimColor;
        float _RimPower;

        struct Input
        {
            float2 uv_MainTex;
            //float2 uv_NormalMap;
            float3 viewDir;
        };

        void surf (Input IN, inout SurfaceOutput o)
        {
            fixed4 c = tex2D(_MainTex, IN.uv_MainTex);
            //o.Albedo = c.rgb;
            //o.Normal = UnpackNormalMap(_BumpMap, IN.uv_NormalMap);
            o.Emission = float3 (0, 1, 0);
            float rim = saturate(dot(o.Normal, IN.viewDir));
            rim = pow(1 - rim, _RimPower); // * _RimColor;
            o.Alpha = rim * sin(_Time.y * 3);
        }
        ENDCG
    }
    FallBack "Diffuse"
}