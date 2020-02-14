/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    int arr[5] = { 100,200,300,400,500 };
    int* ptr1, * ptr2, * ptr3;

    ptr1 = arr;

    printf("%p %d %p\n", ptr1, *ptr1, &ptr1);

    ptr2 = &arr[2];

    printf("%p %d %p\n", ptr2, *ptr2, &ptr2);

    ptr3 = ptr1 + 4;
    printf("%p %d %p\n", ptr3, *ptr3, &ptr3);
    printf("%td\n", ptr3 - ptr1);

	system("pause");
	return EXIT_SUCCESS;
}