/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 / 선택문 작업
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - Hayoung Lee
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int a = 10;

    if (a >= 0)
    {
        a = 1;
    }
    else
    {
        a = -1;
    }

    printf("a = %d\n", a);

	system("pause");
	return EXIT_SUCCESS;
}