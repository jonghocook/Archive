#include <stdio.h>

int record[5][5];

void RecordInput(void);
void RecordTotal(void);
void PrintAllData(void);

int main(void)
{
    RecordInput();
    RecordTotal();
    PrintAllData();

    record[4][4] =0;

    return 0;
}

void RecordInput(void)
{
    int i, j;
    int per_total;
    for(i=0; i<4; i++)
    {
        per_total = 0;
        printf("Enter %dst student's score \n", i+1);
        for(j=0; j<4; j++)
        {
            printf("class %d ", j+1);
            scanf("%d", &record[i][j]);
            per_total += record[i][j];
        }
        record[i][4] = per_total;
    }
}

void RecordTotal(void)
{
    int i, j;
    int sbj_total = 0;

    for(i=0; i<4; i++)
    {
        sbj_total = 0;
        for(j=0; j<4; j++)
        {
            sbj_total += record[j][i];
        }
        record[4][i] = sbj_total;
    }
}

void PrintAllData(void)
{
    int i, j;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%5d", record[i][j]);
        }
        printf("\n");
    }
}