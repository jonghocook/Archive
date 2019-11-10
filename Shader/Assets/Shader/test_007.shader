// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/test_007"
{
    SubShader
    {
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            float4 vert(appdata_base v) : POSITION
            {
                return UnityObjectToClipPos(v);
            }

            fixed4 frag(float4 sp : VPOS) : SV_Target
            {
                return fixed4(sp.xy / _ScreenParams.xy, 0.0, 1.0)
            }
            ENDCG
        }
    }
}