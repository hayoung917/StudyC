/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/구조체 연결 리스트
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
struct list
{
    int num;
    struct list* next; //구조체아님
};

int main(void)
{
    struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
    struct list* head = &a, * current;

    a.next = &b;
    b.next = &c;

    printf("head->num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);
    //printf("head->next : %p\n", head->next); //주소 같음
    //printf("head->next : %p\n", a.next);
    //printf("b address : %p\n", &b);

    printf("list all : ");
    current = head;
    while (current != NULL)
    {
        printf("%5d", current->num);
        current = current->next;
    }
    printf("\n");

    printf("b delete : ");
    a.next = &c;
    b.next = 0;
    current = head;
    while (current != NULL)
    {
        printf("%5d", current->num);
        current = current->next;
    }
    printf("\n");


    system("pause");
    return EXIT_SUCCESS;
}
