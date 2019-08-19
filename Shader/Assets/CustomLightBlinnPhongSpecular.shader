Shader "Custom/CustomLightBlinnPhongSpecular"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white"{}
        _BumpMap ("NormalMap", 2D) = "bump" {}
    }

    SubShader
    {
        Tags {"RenderType" = "Opaque"}

        CGPROGRAM
        #pragma surface surf test noambient

        sampler2D _MainTex;
        sampler2D _BumpMap;

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
            float ndotl = saturate(dot(s.Noraml, lightDir));
            float4 final;
            float3 DiffColor;
            DiffColor = ndotl * s.Albedo * _LightColor0.rgb * atten;
            
            float3 H = normalize(lightDir + viewDir);

            final.rgb = DiffColor.rgb;
            final.a = s.Alpha;
            return final;
        }
        ENDCG
    }
    FallBack "Diffuse"
}