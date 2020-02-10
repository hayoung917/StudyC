/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/ 공용체 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Hayoung LEE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union student
{
    int num;
    double grade;
};

enum season
{
    SPRING = 5,
    SUMMER,
    FALL = 10,
    WINTER
};

// 메인함수
int main(void) 
{
    //union student s1 = { 315 };
    //printf("학번 %d\n", s1.num);

    //s1.grade = 4.4;
    //printf("학점 %.1lf\n", s1.grade);

    //printf("학번 %d\n", s1.num); //공간을 같이 씀

    enum season ss;
    char* pc = NULL;

    ss = SPRING;

    switch (ss)
    {
    case SPRING:
        pc = "inline";
        break;
    case SUMMER:
        pc = "swimming";
        break;
    case FALL:
        pc = "trip";
        break;
    case WINTER:
        pc = "skiing";
        break;
    default:
        pc = "error";
        break;
    }

    printf("나의 레저 활동 => %s\n", pc);

	system("pause");
	return EXIT_SUCCESS;
}