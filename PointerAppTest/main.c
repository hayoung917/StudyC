/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�\������ �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    //int a = 0;
    //double b = 0;
    //char c = 65;

    //printf("a�� �ּ� : %u\n", &a);
    //printf("b�� �ּ� : %u\n", &b);
    //printf("c�� �ּ� : %u\n", &c);


    //int a = 10, b = 15, total;
    //double avg;
    //int* pa, * pb;
    //int* pt = &total;
    //double* pg = &avg;

    //pa = &a;
    //pb = &b;

    //*pt = *pa + *pb;
    //*pg = *pt / 2.0;

    //printf("�� ������ �� : %d, %d\n", *pa, *pb);
    //printf("�� ������ �� : %d\n", *pt);
    //printf("�� ������ ��� : %.1lf\n", *pg);

    //int a = 10, b = 20;
    //const int* pa = &a;

   

    //printf("a �� : %d\n", *pa);
    //pa = &b;
    //printf("b �� : %d\n", *pa);
    //pa = &a;
    //a = 20;
    //printf("a�� : %d\n", *pa);

    //char ch = 'A';
    //int in = 10;
    //double db = 10.4;
    //
    //char* pc = &ch;
    //int* pi = &in;
    //double* pd = &db;

    //printf("ch size : %u\n", sizeof(ch));
    //printf("in size : %u\n", sizeof(in));
    //printf("db size : %u\n", sizeof(db));

    //printf("ch pointer size : %u\n", sizeof(&ch));
    //printf("in pointer size : %u\n", sizeof(&in));
    //printf("db pointer size : %u\n", sizeof(&db));

    int a = 10;
    int* p = &a;
    double* pd;

    pd = p;
    printf("%lf\n", *pd);



	system("pause");
	return EXIT_SUCCESS;
}