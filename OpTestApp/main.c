/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    ////elseif ��ſ� ��밡��
    //int a = 10, b = 20;
    //int res = 0;

    //res = (a > b) ? a : b;

    //printf("res = %d\n", res);

    int a = 10, b = 20;

    //��Ʈ������
    printf("a & b : %d\n", a & b);
    printf("a ^ b : %d\n", a ^ b);
    printf("a | b : %d\n", a | b);
    printf("~a : %d\n", ~a);
    printf("a >> 1 : %d\n", a >> 1);
    printf("a << 2 : %d\n", a << 2);

	system("pause");
	return EXIT_SUCCESS;
}