#include <stdio.h>

int main(void)
{
    int somang[4][2];                                   //2차원 배열선언
    int i, j;                                           //두번의 반복문을 위한 변수 준비
    int popu;                                           //층별 변수

    for(i=0; i<4; i++)
    {
        for(j=0; j<2; j++)
        수
            printf("%dF - %d man: ", i+1, j+1);         //층별 호수마다 인원을 입력받아 배열에 저장한다
            scanf("%d", &somang[i][j]);
        }
    }

    for(i=0; i<4; i++)
    {
        popu=0;                                         //층별 인원을 초기화
        for(j=0; j<2; j++)
        {
            popu+=somang[i][j];                         //층별 호수 인원을 더해 층별 총인원을 구한다
        }
        printf("%dF All: %d \n", i+1, popu);            //층수와 총인원 출력
    }

    return 0력
}