/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 정적변수 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - HayoungLee.
*/

#include <stdio.h>
#include <stdlib.h>

//void auto_func(void);
//void static_func(void);
//
//
//// 메인함수
//int main(void) 
//{
//    printf("일반 지역변수 함수...\n");
//    for (int i = 0; i < 3; i++)
//    {
//        auto_func();
//    }
//
//    printf("일반 정적 지역변수 함수...\n");
//    for (int i = 0; i < 3; i++)
//    {
//        static_func();
//    }
//
//	system("pause");
//	return EXIT_SUCCESS;
//}
//
//void auto_func(void)
//{
//    int a = 0;
//    a++;
//    printf("a : %d\n", a);
//}
//
//void static_func(void)
//{
//    static int a = 0;
//    a++;
//    printf("a : %d\n", a);
//}

//void add_ten(int *pa);
//
//int main()
//{
//    //register int i;
//    //int sum = 0;
//
//    //for (int i = 0; i <= 10000; i++)
//    //{
//    //    sum += i;
//    //}
//
//    //printf("%d\n", sum);
//
//    int a = 10;
//    add_ten(&a);
//    printf("a = %d\n", a);
//
//    system("pause");
//    return EXIT_SUCCESS;
//}
//
//void add_ten(int *pa)
//{
//    *pa += 10;
//}
//
//int add_ten(int a);
//int main()
//{
//    int a = 10;
//    int res = add_ten(a);
//    printf("res = %d\n", res);
//
//    system("pause");
//    return EXIT_SUCCESS;
//}
//
//int add_ten(int a)
//{
//    a += 10;
//    return a + 10;
//}

int* sum(int a, int b);

int main(void)
{
    int a = 10, b = 20;
    int* res = sum(a, b);
    printf("합 = %d\n", *res);

    system("pause");
    return EXIT_SUCCESS;
}

int* sum(int a, int b)
{
    static int res;
    res = a + b;
    return &res;
}