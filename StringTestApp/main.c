/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
  /*  char str[80] = "apple jam";
    int res;

    printf("���� : %s\n", str);
    printf("���ڿ� �Է� : ");
    scanf("%s", str);
    printf("�Է� �� ���ڿ� : %s\n", str);*/

    /*char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s %s\n", str1, str2);*/

    char str[80] = { 0 };

    printf("���ڿ� �Է� : ");
    gets(str);
    printf("���ڿ� ��� : ");
    puts(str);

	system("pause");
	return EXIT_SUCCESS;
}