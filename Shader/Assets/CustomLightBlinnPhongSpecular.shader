Shader "Custom/CustomLightBlinnPhongSpecular"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white"{}
        _BumpMap ("NormalMap", 2D) = "bump" {}
        _SpecCol ("Specular Color", Color) = (1, 1, 1, 1)
        _SpecPow ("Specular Power", Range(10, 200)) = 100
    }

    SubShader
    {
        Tags {"RenderType" = "Opaque"}

        CGPROGRAM
        #pragma surface surf test //noambient

        sampler2D _MainTex;
        sampler2D _BumpMap;
        float4 _SpecCol;
        float _SpecPow;

        struct Input
        {
            float2 uv_MainTex;
            float2 uv_BumpMap;
        };

        void surf (Input IN, inout SurfaceOutput o)
        {
            fixed4 c = tex2D(_MainTex, IN.uv_MainTex);
            o.Albedo = c.rgb;
            o.Normal = UnpackNormal(tex2D(_BumpMap, IN.uv_BumpMap));
            o.Alpha = c.a;
        }

        void LightTest (SurfaceOutput s, float3 lightDir, float3 viewDir, float atten)
        {
            float4 final;

            //Lambert term
            float3 DiffColor;
            float ndotl = saturate(dot(s.Noraml, lightDir));
            DiffColor = ndotl * s.Albedo * _LightColor0.rgb * atten;
            
            //Spec term
            float3 SpecColor;
            float3 H = normalize(lightDir + viewDir);
            float spec = saturate(dot(H, s.Normal));
            spec = pow(spec, _SpecPow);
            SpecColor = spec * _SpecCol.rgb;

            //Final term
            final.rgb = DiffColor.rgb + SpecColor.rgb;
            final.a = s.Alpha;
            return final;
        }
        ENDCG
    }
    FallBack "Diffuse"
}