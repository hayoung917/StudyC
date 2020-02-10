/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
    FILE* fp;
    int age;
    char name[20];
    fp = fopen("a.txt", "r");
    if (fp == NULL)
    {
        return EXIT_FAILURE;
    }

    fscanf(fp, "%d", &age);

    fgetc(fp);
    fgets(name, sizeof(name), fp);
    printf("이름 : %s, 나이 : %d", name, age);

    fclose(fp);

	system("pause");
	return EXIT_SUCCESS;

    //FILE* afp, * bfp;
    //int num = 213456;
    //int res;

    //afp = fopen("a.txt", "wt");
    //if (afp == NULL)
    //{
    //    return EXIT_FAILURE;
    //}
    //fprintf(afp, "%d", num);

    //bfp = fopen("b.txt", "wb");
    //if (bfp == NULL)
    //{
    //    return EXIT_FAILURE;
    //}
    //fwrite(&num, sizeof(num), 1, bfp);

    //fclose(afp);
    //fclose(bfp);

    //bfp = fopen("b.txt", "rb");
    //fread(&res, sizeof(res), 1, bfp);
    //printf("%d", res);

    //fclose(bfp);

    //system("pause");
    //return EXIT_SUCCESS;
}