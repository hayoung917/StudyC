/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/변수 영역 데이터 공유 테스트
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void assign(void);
void assign10(void);
void assign20(void);

int a;
// 메인함수
int main(void) 
{
    //auto int a = 0;
    //assign();
    //printf("main a의 값 : %d\n", a);

    //int a = 10;
    //int b = 20;
    //printf("교환 전 : %d, %d\n", a, b);
    //{
    //    int temp;
    //    int a = 0, b = 0;
    //    temp = a;
    //    a = b;
    //    b = temp;
    //}
    //printf("교환 후 : %d, %d\n", a, b);

    a = 0;

    printf("a의 값 : %d\n", a);
    assign10();
    assign20();
    printf("a의 값 : %d\n", a);

	system("pause");
	return EXIT_SUCCESS;
}

//void assign(void)
//{
//    int a = 0;
//    a = 10;
//    printf("assign a의 값 : %d\n", a);
//
//    return;
//}

void assign10(void)
{
    a = 10;
}
void assign20(void)
{
    a = 20;
}