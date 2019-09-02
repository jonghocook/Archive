Shader "Custom/CustomLight"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white"{}
        _BumpMap ("NormalMap" 2D) = "bump"{}
        _SpecCol ("Specular Color", Color) = (1, 1, 1, 1)
        _SpecPow ("Specular Power", Range(10, 200)) = 100
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
        half4 _SpecCol;
        half _SpecPow;

        struct Input
        {
            half2 uv_MainTex;
            half2 uv_BumpMap;
            half2 uv_GlossTex;
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

        half4 LightingTest (SurfaceOutput s, float3 lightDir, float3 viewDir, float atten)
        {
            half4 final;

            //lambert term
            half3 DiffColor;
            half3 ndotl = saturate(dot(s.Normal, lightDir));
            DiffuColor = ndotl * s.Albedo * _LightColor0.rgb * atten;

            //Spec term
            half3 SpecColor;
            half3 H = normalize(lightDir + viewDir);
            half spec = saturate(dot(H, s.Normal));
            spec = pow(spec, _SpecPow));
            SpecColor = spec * _SpecCol.rgb * s.Gloss;

            //final term
            final.rgb = DiffColor.rgb + SpecColor.rgb;
            final.a = s.Alpha;
            return final;
        }
        ENDCG
    }
    FallBack "Diffuse"
}