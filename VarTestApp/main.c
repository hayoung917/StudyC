/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/���� ���� ������ ���� �׽�Ʈ
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
// �����Լ�
int main(void) 
{
    //auto int a = 0;
    //assign();
    //printf("main a�� �� : %d\n", a);

    //int a = 10;
    //int b = 20;
    //printf("��ȯ �� : %d, %d\n", a, b);
    //{
    //    int temp;
    //    int a = 0, b = 0;
    //    temp = a;
    //    a = b;
    //    b = temp;
    //}
    //printf("��ȯ �� : %d, %d\n", a, b);

    a = 0;

    printf("a�� �� : %d\n", a);
    assign10();
    assign20();
    printf("a�� �� : %d\n", a);

	system("pause");
	return EXIT_SUCCESS;
}

//void assign(void)
//{
//    int a = 0;
//    a = 10;
//    printf("assign a�� �� : %d\n", a);
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