/* 학생의 최종 학점을 계산하는 프로그램을 작성하자. 학생의 성적이 90점 이상이면 A, 80점 이상이면 B, 70점이상이면 C, 50점 이상이면 D이고 그 미만이면 F다!
프로그램 실행 시 순서대로 국어, 영어, 수학의 점수를 입력받는다. 그리고는 평균을 구한 다음 그에 적절한 학점을 출력해 주면 된다.
단 프로그램 구현의 편의를 위해서 평균을 구하는 과정에서 발생할 수 있는 소수부의 손실은 무시하기로 하자.
 */
#include <stdio.h>

int main(void)
{
    int score;
    int total = 0;
    float sum_class;

    printf("Enter Score for Korean, English, Math \n");

    for(int i=0; i<3; i++)
    {
        printf("Enter Score> ");
        scanf("%d", &score);
        total += score;
    }

    sum_class = total / 3;
    
    if(sum_class > 50)
    {
        if(sum_class >= 90)
        {
            printf("Result : \"A\"\n");
        }
        else if(sum_class >= 80)
        {
            printf("Result : \"B\"\n");
        }
        else if(sum_class >= 70)
        {
            printf("Result : \"C\"\n");
        }
        else{
          printf("result : \"D\"\n");
        }
    }
    else{
        printf("result : \"F\"\n");
    }

    return 0;
}