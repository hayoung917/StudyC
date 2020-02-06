/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/더블 포인터 배열
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_ary(int(*pa)[4]);
//void print_str(char** src, int count);
// 메인함수
int main(void) 
{
    //char* ptr_ary[4] = { "eagle","tiger","lion","squirrel" };
    //int count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    //print_str(ptr_ary, count);

    //int ary[5] = { 1,2,3,4 };

    //printf("%d\n", *ary);
    //printf("%p\n", *&ary);
    //printf("%p\n", (ary + 1));
    //printf("%p\n", &ary + 1);
    //printf("%d\n", *(ary + 1));
    //printf("%p\n", *&ary + 1);

    //int ary[3][4] =
    //{
    //    {1,2,3,4},{5,6,7,8},{9,10,11,12}
    //};

    //int(*pa)[4];
    //pa = ary;

    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 4; j++)
    //    {
    //        printf("%d\t", pa[i][j]);
    //    }
    //    printf("\n");
    //}

    int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    print_ary(ary);

	system("pause");
	return EXIT_SUCCESS;
}
//void print_str(char** src, int count)
//{
//    for (int i = 0; i < count; i++)
//    {
//        printf("%s\n", src[i]);
//    }
//}

void print_ary(int(*pa)[4])
{
    for (int i = 0; i < 3; i++)
    {
        for  (int j = 0; j < 4; j++)
        {
            printf("%d\t",pa[i][j]);
        }
        printf("\n");
    }
}
