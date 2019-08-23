Shader "Custom/EditSpecularPower"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white"{}
        _BumpMap ("NormalMap", 2D) = "Bump"{}
        _SpecColor ("SpecularColor", Color) = (1, 1, 1, 1)
        _SpecPower ("SpecularPower", Range(10, 200)) = 100
        _GlossTex ("Gloss Tex", 2D) = "white"{}
    }

    SubShader
    {
        Tags {"RenderType" = "Opaque"}

        CGPROGRAM
        #pragma surface surf Test

        sampler2D _MainTex;
        sampler2D _BumpMap;
        sampler2D _GlossTex;
        float4 _SpecColor;
        float _SpecPower;

        struct Input
        {
            float2 uv_MainTex;
            float2 uv_BumpMap;
            float2 uv_GlossTex;
        };

        void surf (Input IN, inout SurfaceOutput o)
        {
            fixed4 c = tex2D(_MainTex, IN.uv_MainTex);
            fixed4 m = tex2D(_GlossTex, IN.uv_GlossTex);
            o.Albedo = c.rgb;
            o.Normal = UnpackNormal(tex2D(_BumpMap, IN.uv_BumpMap));
            o.Gloss = m.a;
            o.Alpha = c.a;
        }

        float4 LightingTest (SurfaceOutput s, float3 lightDir, float3 viewDir, float atten)
        {
            float4 final;

            //Lambert
            float3 DiffColor;
            float ndotl = saturate(dot(s.Normal, lightDir));
            DiffColor = ndotl * s.Albedo * _LightColor0.rgb * atten;

            //Spec
            float3 SpecColor;
            float3 H = normalize(lightDir + viewDir);
            float spec = pow(spec, _SpecPower);
            SpecColor = spec * _SpecColor.rgb * s.Gloss;

            //Rim
            float3 rimColor;
            float rim = abs(dot(viewDir, s.Normal));
            float invrim = 1 - rim;
            rimColor = pow(invrim, 6) * float3(0.5, 0.5, 0.5);

            //final
            final.rgb = DiffColor.rgb + SpecColor.rgb;
            final.a = s.Alpha;
            return final;
        }
        ENDCG
    }
    FallBack "Diffuse"
}