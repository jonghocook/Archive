Shader "Custom/ExerciseLighing01"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white"{}
        _BumpMap ("Normal Map", 2D) = "bump"{}
        _GlossTex ("GlossTexture", 2D) = "white"{}
        _SpecCol ("Specular Color", Color) = (1, 1, 1, 1)
        _SpecPow ("Specular Power", Range(10, 100)) = 10
        _SpecCol2 ("Specular Color", Color) = (1, 1, 1, 1)
        _SpecPow2 ("Specular Power", Range(10, 100)) = 10
        _RimCol ("RimColor", Color) = (1, 1, 1, 1)
        _RimPow ("RimPow", Range(1, 10)) = 3
    }

    SubShader
    {
        Tags {"RenderType" = "Opaque"}
        CGPROGRAM
        #pragma surface surf Text noambient

        sampler2D _MainTex;
        sampler2D _BumpMap;
        sampler2D _GlossTex;
        float4 _SpecCol;
        float4 _SpecCol2;
        float4 _RimCol;
        float _SpecPow;
        float _SpecPow2;
        float _RimPow;

        struct Input
        {
            float2 uv_MainTex;
            float2 uv_BumpMap;
            float2 uv_GlossTex;
            float3 viewDir
        };

        void surf (Input IN, inout SurfaceOutput o)
        {
            fixed4 c = tex2D(_MainTex, IN.uv_MainTex);
            fixed4 m = tex2D(_GlossTex, IN.uv_GlossTex);
            o.Normal = UnpackNormal(tex2D(_BumpMap, IN.uv_BumpMap));
            o.Albedo = c.rgb;
            o.Gloss = m.a;
            o.Alpha = c.a;
        }

        float4 LigtingTest (SurfaceOutput s, float3 lightDir, float3 viewDir, float atten)
        {
            float4 final;

            float3 DiffColor;


            return final;
        }
        ENDCG
    }
    FallBack "Diffuse"
}