/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb);
// 메인함수
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