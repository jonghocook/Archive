Shader "Custom/test_012"
{
    Properties
    {
        //없음...
    }

    SubShader
    {
        Pass
        {
            CGPROGRAM

            #pragma vertex vert_img
            #pragma fragment frag
            #pragma target 3.0
            #include "UnityCG.cginc"

            float4 frag(v2f_img i) : SV_Target
            {
                float2 mcoord;
                float2 coord = float2(0, 0);
                mcoord.x = ((1 - i.uv.x) * 3.5) - 2.5;
                mcoord.y = (i.uv.y * 2) - 1;
                float iteration = 0;
                const float _MaxIter = 29;
                const float PI = 3.14159;
                float xtemp;
                for(iteration = 0; interation < _MaxIter; iteration += 1)
                {
                    if(coord.x * coord.x + coord.y * coord.y > 2 * (cos(fmod(_Tim.y, 2 * PI)) + 1))
                    break;
                    xtemp = coord.x * coord.x - coord.y * coord.y + mcoord.x;
                    coord.y = 2 * coord.x * coord.y + mcoord.y;
                    coord.x = xtemp;
                }
                float val = fmod((iteration / _MaxIter) + _Time.x, 1);
                float4 color;

                color.r = clamp((3 * abs(fmod(2 * val, 1) - 0.5)), 0, 1);
                color.g = clamp((3 * abs(fmod(2 * val + (1 / 3), 1) - 0.5)), 0, 1);
                color.b = clamp((3 * abs(fmod(2 * val - (1 / 3), 1) - 0.5)), 0, 1);
                color.a = 1;

                return color;
            }
            ENDCG
        }
    }
}