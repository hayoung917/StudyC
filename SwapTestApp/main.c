/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/������
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb);
// �����Լ�
int main(void) 
{
    int a = 10, b = 15;
    swap(&a, &b);

    printf("a, b : %d, %d\n",a,b);
   
	system("pause");
	return EXIT_SUCCESS;
}

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}