// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/test_011"
{
    Properties
    {
        _CirclesX ("Circles in X", float) = 2.0
        _CirclesY ("Circles in Y", float) = 1.0
        _Fade ("Fade", Range(0, 1)) = 0.5
    }

    SubShader
    {
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            uniform float _CirclesX;    // uniform은 외부값변수의 식별자.
            uniform float _CirclesY;
            uniform float _Fade;

            float4 vert(appdata_base v) : POSITION
            {
                return UnityObjectToClipPos(v.vertex);
            }

            fixed4 frag(float4 sp : VPOS) : SV_Target
            {
                float2 wcoord = sp.xy / ScreenParams.xy;
                fixed4 color;
                if(length(fmod(float2(_CirclesX * wcoord.x, _CirclesY * wcoord.y), 2.0) - 1.0) < _Fade)
                {
                    color = fixed4(sp.xy / _ScreenParams.xy, 0, 1);
                }
                else
                {
                    color = fixed4(0.3, 0.3, 0.3, 1.0);
                }
                return color;
            }
            ENDCG
        }
    }
}