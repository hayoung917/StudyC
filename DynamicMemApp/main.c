/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/동적메모리 할당
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
    //int* pi;
    //double* pd;

    //pi = (int*)malloc(sizeof(int));
    //if (pi == NULL)
    //{
    //    printf("#메모리가 부족합니다.\n");
    //    exit(1);
    //}

    //pd = (double*)malloc(sizeof(double));
    //if (pd == NULL)
    //{
    //    printf("#메모리가 부족합니다.\n");
    //    exit(1);
    //}

    //*pi = 10;
    //*pd = 3.4;

    //printf("정수형으로 사용 : %d\n", *pi);
    //printf("실수형으로 사용 : %.1lf\n", *pd);

    //free(pi);
    //free(pd);

    //int* pi;
    //int sum = 0;

    //pi = (int*)malloc(5 * sizeof(int));
    //if (pi == NULL)
    //{
    //printf("#메모리가 부족합니다.\n");
    //exit(1);
    //}

    //printf("다섯명의 나이를 입력하세요 : ");
    //for (int i = 0; i < 5; i++)
    //{
    //    scanf("%d", &pi[i]);
    //    sum += pi[i];
    //}

    //printf("나이의 평균값 %.1lf\n", sum / 5.0);
    //free(pi);

    int* pi;
    int size = 5;
    int count = 0;
    int num;

    pi = (int*)calloc(size, sizeof(int));
    if (pi == NULL)
    {
        printf("#메모리가 부족합니다.\n");
        exit(1);
    }

    while (1)
    {
        printf("양수만 입력하세요 => ");
        scanf("%d", &num);
        if (num <= 0)
        {
            break;
        }
        if (count == size)
        {
            size += 5;
            pi = (int*)realloc(pi, size * sizeof(int));

        }
        pi[count++] = num;
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d\t", pi[i]);
    }
    free(pi);


	system("pause");
	return EXIT_SUCCESS;
}