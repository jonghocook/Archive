Shader "Custom/test_004_01"
{
    Properties
    {
        _MainTex ("Main Texture", 2D) = "" {}
        _dotX_Value ("DotX Value", Range(0, 90)) = 22
        _dotY_Value ("DotY Value", Range(0, 90)) = 80
        _EditValue ("Value", Range(0, 10000)) = 100
        _EditValue2 ("EditValue", Range(0, 10000)) = 1000
    }

    SubShader
    {
        Tags {"RenderType" = "Opaque" "Queue" = "Transparent"}
        GrabPass {"_GrabTexture"}

        CGPROGRAM
        #pragma surface surf NoLight noambient
        #pragma target 3.0

        sampler2D _GrabTexture;
        sampler2D _MainTex;
        float _dotX_Value;
        float _dotY_Value;
        float _EditValue;
        float _EditValue2;

        struct Input
        {
            float2 uv_MainTex;
            float4 screenPos;
        };

        float Random (float2 p)
        {
            float r = dot(p, float2(_dotX_Value, _dotY_Value));
            r = frac(sin(r) * _EditValue2);
            return r;
        }

        float Noise (float2 p)
        {
            float2 i = floor(p);
            float2 fr = frac(p);

            float a = Random(i + float2(0, 0));
            float b = Random(i + float2(1, 0));
            float c = Random(i + float2(0, 1));
            float d = Random(i + float2(1, 1));

            float2 u = smoothstep(0, 1, fr);

            float ab = lerp(a, b, u.x);
            float cd = lerp(c, d, u.x);
            float abcd = lerp(ab, cd, u.y);

            return abcd;
        }

        void surf (Input IN, inout SurfaceOutput o)
        {
            float2 uv = IN.uv_MainTex * _EditValue;
            uv += float2(0, _Time.y);
            float noise = Noise(uv);
            float4 sp = IN.screenPos;
            sp.xy += noise * 0.2;

            fixed4 grabTex = tex2Dproj(_GrabTexture, sp);
            
            fixed3 col = grabTex;
            o.Albedo = col;
            o.Alpha = 1;
        }

        fixed4 LightingNoLight (SurfaceOutput s, float3 lightDir, float atten)
        {
            fixed4 col;
            col.rgb = s.Albedo;
            col.a = 1;
            return col;
        }
        ENDCG
    }
    FallBack "Diffuse"
}
