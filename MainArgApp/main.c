/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/콘솔 매개변수 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(int argc, char **argv) 
{
    int i;

    if (argc <= 1)
    {
        printf("명령 구분이 올바르지 않습니다.\n");
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

    printf("첫번째 명령인수 %s\n", intarg[0]);
    printf("두번째 명령인수 %s\n", intarg[1]);

    for (i = 0; i < 2; i++)
    {
        free(intarg[i]);
    }
	system("pause");
	return EXIT_SUCCESS;
}