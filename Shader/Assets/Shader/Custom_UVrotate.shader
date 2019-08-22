Shader "Custom/CustomUV_Rotate"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white"{}
        _RotationSpeed ("Rotation Speed", float) = 4.0
    }

    SubShader
    {
        Tags {"RenderType" = "Opaque"}

        CGPROGRAM
        #pragma surface surf Lambert vertex:vert noambient

        sampler2D _MainTex;

        struct Input
        {
            float2 uv_MainTex;
        };

        float _RotationSpeed;

        // vert 함수 시작

        void vert (inout appdata_full v)    //appdata_full 구조체 가져와서 사용.
        {
            v.texcoord.xy -= 0.5;
            float s = -sin (_RotationSpeed * _Time);
            float c = cos (_RotationSpeed * _Time);
            float2x2 rotationMatrix = float2x2 (c, -s, s, c);
            rotationMatrix *= 0.5;
            rotationMatrix += 0.5;
            rotationMatrix = rotationMatrix * 2-1;

            v.texcoord.xy = mul (v.texcoord.xy, rotationMatrix);
            v.texcoord.xy += 0.5;
        }

        void surf (Input IN, inout SurfaceOutput o)
        {
            half4 c = tex2D (_MainTex, IN.uv_MainTex);
            o.Albedo = c.rgb;
            o.Alpha = c.a;
        }
        ENDCG
    }
    FallBack "Diffuse"
}