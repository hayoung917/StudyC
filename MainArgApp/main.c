/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/�ܼ� �Ű����� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(int argc, char **argv) 
{
    int i;

    if (argc <= 1)
    {
        printf("��� ������ �ùٸ��� �ʽ��ϴ�.\n");
        exit(1);
    }

    char* intarg[2];
    int j = 0;

    for (i = 0; i < argc; i++)
    {
        if (i == 0)
        {
            continue;
        }
        intarg[j] = (char*)malloc(strlen(argv[i]) + 1);
        strcpy(intarg[j], argv[i]);
        j++;
    }

    printf("ù��° ����μ� %s\n", intarg[0]);
    printf("�ι�° ����μ� %s\n", intarg[1]);

    for (i = 0; i < 2; i++)
    {
        free(intarg[i]);
    }
	system("pause");
	return EXIT_SUCCESS;
}