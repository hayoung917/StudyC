/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/������ ���� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_ptr(char** ppa, char** ppb);
// �����Լ�
int main(void) 
{
    char* pa = "success";
    char* pb = "failure";

    printf("pa = %s, pb = %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa = %s, pb = %s\n", pa, pb);
	system("pause");
	return EXIT_SUCCESS;
}
void swap_ptr(char** ppa, char** ppb)
{
    char* temp;
    temp = *ppa;
    *ppa = *ppb;
    *ppb = temp;
}