Shader "Custom/rim_1"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white"{}
        _RimColor ("RimColor", Color) = (1, 1, 1, 1)
        _RimPower ("RimPower", Range(1, 10)) = 3
    }
    
    SubShader
    {
        Tags {"RenderType" = "Opaque"}

        CGPROGRAM
        #pragma surface surf Lambert noambient

        sampler2D _MainTex;
        float4 _RimColor;
        float _RimPower;

        struct Input
        {
            float2 uv_MainTex;
            float3 viewDir;
        };

        void surf (Input IN, inout SurfaceOutput o)
        {
            fixed4 c = tex2D (_MainTex, IN.uv_MainTex);
            o.Albedo = 0;
            float rim = saturate(dot(o.Normal, IN.viewDir));    
            //dot : 내적, 같은방향일때 가장 밝고, 각도가 90도일때 가장 어둡다.
            //saturate : -1값 상쇄하여 양수값으로 정리.
            o.Emission = pow(1 - rim, _RimPower) * _RimColor.rgb;
            //pow : (X, n) X의 N의 배수 메소드에 RimColor색상을 곱한다.
            //Albedo값은 검은색이고 그위에 Emission값을 추가하여 출력한다.
            o.Alpha = c.a;
        }
        ENDCG
    }
    FallBack "Diffuse"
}