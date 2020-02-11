/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/동적 라이브러리
  --------------------------------------------------------------------------------
  first created - 2020.02.11
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include "mycalc.h"

#pragma comment(lib,"MyMathLib.lib")

// 메인함수
int main(void) 
{
    int res = int_add(10, 30);
    printf("res = %d\n", res);

    res = int_multi(10, 40);
    printf("res = %d\n", res);

	system("pause");
	return EXIT_SUCCESS;
}