Shader "Custom/CustomLight_03"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white"{}
        _BumpMap ("NormalMap", 2D) = "bump"{}
        _GlossTex ("Gloss Tex", 2D) = "white"{}
        _SpecCol ("Sepcular Color", Color) = (1, 1, 1, 1)
        _SpecPow ("Specular Power", Range(10, 100)) = 100
        _SpecCol2 ("Specular Color2", Color) = (1, 1, 1, 1)
        _SpecPow2 ("Specular Power2", Range(10, 100)) = 100
        _RimCol ("Rim Color", Color) = (1, 1, 1, 1)
        _RimPow ("Rim Power", Range(1, 10)) = 3
    }
    SubShader
    {
        Tags {"RenderType" = "Opaque"}

        CGPROGRAM
        #pragma surface surf coox //noambient

        sampler2D _MainTex;
        sampler2D _BumpMap;
        sampler2D _GlossTex;
        float4 _SpecCol;
        float4 _SpecCol2;
        float4 _RimCol;
        float _SpecPow;
        float _SpecPow2;
        float _RimPow;

        struct Input Input{
            float2 uv_MainTex;
            float2 uv_BumpMap;
            float2 uv_GlossTex;
            float3 viewDir;
        };

        void surf (Input IN, inout SurfaceOutput o)
        {
            fixed4 c = tex2D(_MainTex, IN.uv_MainTex);
            fixed4 m = tex2D(_GlossTex, IN.uv_GlossTex);
            o.Albedo = c.rgb;
            o.Normal = UnpackNormal(tex2D(_BumpMap, IN.uv_BumpMap));
            o.Gloss = m.a
            o.Alpha = c.a;
        }

        float4 Lightingcoox (SurfaceOutput s, float3 lightDir, float3 viewDir, float atten)
        {
            float4 final;

            //Lambert term
            float3 DiffColor;
            float ndotl = saturate(dot(s.Normal, lightDir));
            DiffColor = ndotl * s.Albedo * _LightColor0.rgb * atten;

            //Spec term
            float3 SpecColor;                           //SpecColor변수를 선언해서 Spec값을 담을 공간을 마련한다.                                       
            float3 H = normalize(lightDir + viewDir);   //H변수에 라이트방향과 카메라방향의 중간값을 구한다.
            float spec = saturate(dot(H, s.Normal));    //spec변수에 노멀라이즈한 H값에 s구조체안에 있는 Normal값의 내적을 구해서 saturate(양수)값으로 정리해서 대입한다.
            spec = pow(spec, _SpecPower);               //spec값을 다시 pow(제곱)함수로 제곱을 시켜준다.
            SpecColor = spec * _SpecCol.rgb * s.Gloss;  //제곱된spec값에 _SpecCol컬러와 s구조체의 Gloss값을 섞어준다.(곱해준다.)

            //Rim term
            float3 rimColor;
            float rim = abs(dot(viewDir, s.Normal));
            float invrim = 1 - rim;
            rimColor = pow(invrim, _RimPow) * _RimCol.rgb;

            //fake spec term
            float3 SpecColor2;
            SpecColor2 = pow(rim, _SpecPow2) * _SpecCol2.rgb * s.Gloss;

            //final term
            final.rgb = DiffColor.rgb + SpecColor.rgb + rimColor.rgb + SpecColor2.rgb;  //모든 rgb값을 더하면 최종적으로 하얀색이 될것으로 예상했으나, 순수하게 rgb색상값이 아닌 각각의 해당면적에 위치한 색상값을 더하는것임으로 전체적인 조화된 색상이 나타난다고 생각한다.
            final.a = s.Alpha;                                                          //Alpha값은 구조체에 있는 Alpha값으로 충분!
            return final;                                                               //Lightingcoox의 모든값을 final로 받아 리턴시켜준다. 리턴값은 float4(r, g, b, a)으로 지정해주었기에 final값도 float4로 리턴한다.
        }
        ENDCG
    }
    FallBack"Diffuse"
}