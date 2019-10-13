Shader "Custom/test_004"
{
    Properties
    {
        _MainTex ("Main Texture", 2D) = "" {}
        _dotX ("DotX", Range(0, 90)) = 22
        _dotY ("DotY", Range(0, 90)) = 80
        _EditValue ("Value", Range(0, 10000)) = 0
        _EditValue2 ("Value2", Range(0, 10000)) = 1000
    } 

    Subshader
    {
        Tags {"RenderType" = "Opaque" "Queue" = "Transparent"}
        GrabPass {"_GrabTexture"}                               //Grabpass를 통해 GrabTexture를 가져온다. 이름은 중괄호안의 이름을 통해 지정한다.

        CGPROGRAM
        #pragma surface surf NoLight noambient
        #pragma target 3.0

        sampler2D _GrabTexture;
        sampler2D _MainTex;
        float _dotX;
        float _dotY;
        float _EditValue;
        float _EditValue2;

        struct Input
        {
            //float4 color : color
            float2 uv_MainTex;
            float4 screenPos;
        };

        float Random(float2 p)
        {
            float r = dot(p, float2(_dotX, _dotY));
            r = frac(sin(r) * _EditValue2);
            return r;
        }

        float Noise(float2 p)
        {
            float2 i = floor(p);
            return Random(i);
        }

        void surf (Input IN, inout SurfaceOutput o)
        {
            float2 uv = IN.uv_MainTex;
            fixed4 grabTex = tex2Dproj(_GrabTexture, IN.screenPos);
            //fixed3 col = float3(uv.x, uv.y, 0);
            //fixed3 col = sin(uv.x * _EditValue);
            //fixed3 col = frac(sin(uv.x * _EditValue) * _EditValue2);
            //fixed3 col = Random(uv);
            fixed3 col = Noise(uv * _EditValue);
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