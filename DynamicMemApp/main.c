/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/�����޸� �Ҵ�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
    //int* pi;
    //double* pd;

    //pi = (int*)malloc(sizeof(int));
    //if (pi == NULL)
    //{
    //    printf("#�޸𸮰� �����մϴ�.\n");
    //    exit(1);
    //}

    //pd = (double*)malloc(sizeof(double));
    //if (pd == NULL)
    //{
    //    printf("#�޸𸮰� �����մϴ�.\n");
    //    exit(1);
    //}

    //*pi = 10;
    //*pd = 3.4;

    //printf("���������� ��� : %d\n", *pi);
    //printf("�Ǽ������� ��� : %.1lf\n", *pd);

    //free(pi);
    //free(pd);

    //int* pi;
    //int sum = 0;

    //pi = (int*)malloc(5 * sizeof(int));
    //if (pi == NULL)
    //{
    //printf("#�޸𸮰� �����մϴ�.\n");
    //exit(1);
    //}

    //printf("�ټ����� ���̸� �Է��ϼ��� : ");
    //for (int i = 0; i < 5; i++)
    //{
    //    scanf("%d", &pi[i]);
    //    sum += pi[i];
    //}

    //printf("������ ��հ� %.1lf\n", sum / 5.0);
    //free(pi);

    int* pi;
    int size = 5;
    int count = 0;
    int num;

    pi = (int*)calloc(size, sizeof(int));
    if (pi == NULL)
    {
        printf("#�޸𸮰� �����մϴ�.\n");
        exit(1);
    }

    while (1)
    {
        printf("����� �Է��ϼ��� => ");
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