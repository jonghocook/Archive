﻿// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

Shader "Custom/test_006"
{
    Properties
    {
        _TintColor ("Color", Color) = (1.0, 1.0, 1.0, 1.0)
    }

    SubShader
    {
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"

            float4 _TintColor;

            float4 vert(float4 v:POSITION) : SV_POSITION
            {
                return UnityObjectToClipPos(v);
            }

            fixed frag() : SV_Target
            {
                return _TintColor;
            }
            ENDCG
        }
    }
}