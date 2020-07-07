/*
문제3
1. 성적 관리 프로그램을 만들자.
2. 과목 : 국어, 영어, 수학, 도덕
3. 학생 : 철희, 철수, 영희, 영수
4. 배열 저장
5. 10점 만점
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    char player[4][10] = {"Chulhee", "Chulsoo", "Yunghee", "Yungsoo"};
    char class[4][10] = {"Korean", "English", "Math", "Manner"}; 
    int score[5][5] = {0};

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%s %s Score : ", player[i], class[j]);
            scanf("%d", &score[i][j]);
            score[i][4] += score[i][j];
            score[4][j] += score[i][j];
        }
    }
    
    printf("\n>>>>>>>>> Total Score <<<<<<<<\n\n");

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            if(j<4)
            {
                printf("%s's %s Score : %d \n", player[i], class[j], score[i][j]);
            }
            if(j==4)
            {
                printf(">>>> %s's Total Score : %d <<<<\n", player[i], score[i][j]);
            }
        }
        printf("\n");
    }
    for(i=0; i<4; i++)
    {
        printf(">>>> %s Total Score : \"%d\" \n", class[i], score[4][i]);
    }

    return 0;
}