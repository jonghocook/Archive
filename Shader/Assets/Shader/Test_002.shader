Shader "Custom/Test_002"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _UVTex ("UV Texture", 2D) = "white"{}
        _ScrollXSpeed ("X ScrollSpeed", Range(0, 10)) = 2
        _ScrollYSpeed ("Y ScrollSpped", Range(0, 10)) = 2
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 200

        CGPROGRAM
        #pragma surface surf Lambert noambient

        sampler2D _MainTex;
        sampler2D _UVTex;
        fixed _ScrollXSpeed;
        fixed _ScrollYSpeed;

        struct Input
        {
            float2 uv_MainTex;
            float2 uv_UVTex;
        };

        void surf (Input IN, inout SurfaceOutput o)
        {
            fixed2 scrolledUV = IN.uv_UVTex;

            fixed xScrollValue = _ScrollXSpeed * _Time;
            fixed yScrollValue = _ScrollYSpeed * _Time;

            scrolledUV += fixed2(xScrollValue, yScrollValue);

            half4 c = tex2D (_MainTex, IN.uv_MainTex);
            half4 d = tex2D (_UVTex, scrolledUV);
            o.Albedo = lerp(c.rgb, d.rgb, 1);
            o.Alpha = c.a;
        }
        ENDCG
    }
    FallBack "Diffuse"
}
