/* 섭씨 온도를 입력하면 화씨 온도로 변환하는 Fahrenheit라는 이름의 함수와 그 반대로
화씨 온도를 섭씨 온도로 변환하는 Celsius함수를 정의하고 이에 적절한 main함수도 구현해 보자.
섭씨와 화씨 온도간의 변환 공식은 다음과 같다.*/

#include<stdio.h>

float FahToCel(float);
float CelToFah(float);
float TransTemperature(int);

int main(void)
{
    int val;
    printf("Choose Number> 1 : Celsius, 2 : Fahrenheit >>> ");
    scanf("%d", &val);

    float temperature = TransTemperature(val);
    printf("%0.2f", temperature);
    return 0;
}

float TransTemperature(int num)
{
    float temperature;
    float fc;
    printf("Enter Temperature> ");
    scanf("%f", &fc);
    if(num == 2)
    {
        temperature = FahToCel(fc);
    }
    else
    {
        temperature = CelToFah(fc);
    }
    return temperature;
}

float FahToCel(float a)
{
    float cel = (a - 32) / 1.8;
    return cel;
}

float CelToFah(float a)
{
    float fah = 1.8 * a + 32;
    return fah;
}