/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    //int ary[5];

    //ary[0] = 10;
    //ary[1] = 20;
    //ary[3] = ary[0] + ary[1];
    //scanf("%d", &ary[2]);

    //for (int i = 0; i < 5; i++)
    //{
    //    printf("ary[i] = %d\n", ary[i]);
    //}

    int score[5];
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);

    for (int i = 0; i < count; i++)
    {
        printf("%d��° ������ �Է��Ͻÿ� : ", i + 1);
        scanf("%d",&score[i]);
    }

    for (int i = 0; i < count; i++)
    {
        total += score[i];
    }
    avg = total / (double)count;

    printf("avg = %.1lf\n", avg);

	system("pause");
	return EXIT_SUCCESS;
}