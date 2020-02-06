/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/도전 실전예제
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>

void sum_ary(void);
void show(void);

int ary[5][6] =
{
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20}
};

// 메인함수
int main(void) 
{

    show();
    sum_ary();

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("%d\t", ary[i][j]);
        }
        printf("\n");
    }

	system("pause");
	return EXIT_SUCCESS;
}
void show(void)
{
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;

        for (int j = 0; j < 5; j++)
        {
            sum += ary[i][j];
        }
        ary[i][5] = sum;
    }

}

void sum_ary(void)
{
    int sum = 0;
    int i, j;

    for (i = 0; i < 5; i++)
    {
        sum = 0;
        for (j = 0; j < 4; j++)
        {
            sum += ary[j][i];
        }
        ary[4][i] = sum;
        ary[4][5] += sum;
    }
}