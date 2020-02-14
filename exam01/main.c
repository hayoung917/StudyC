/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/시험
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 3

typedef struct infomation
{
    int number;
    char name[20];
    char phone[20];
    char mail[80];
} Info;

void input_business_card(Info *lp);
void show_all_cards(Info* lp);
void search_business_card(Info*lp,int num);
void edit_business_card(Info*lp,int num);


// 메인함수
int main(void) 
{
    int input = 0;
    int num=0;

    Info list[MAX];


    while (1)
    {
        printf("1.입력\n2.수정\n3.삭제\n4.전체출력\n5.검색\n6.종료\n");
        scanf("%d", &input);

        switch (input)
        {
        case 1 :
            input_business_card(list);
            break;

        case 2 :
            printf("수정할 명함번호 입력 : ");
            scanf("%d", &num);
            edit_business_card(list, num);
            break;

        case 3 :
            break;

        case 4 :
            show_all_cards(list);
            break;

        case 5 :
            printf("검색할 명함번호를 입력해주세요 : ");
            scanf("%d", &num);
            search_business_card(list, num);
            break;

        case 6 :
            exit(1);
            break;

        default:
            break;
        }
    }

	system("pause");
	return EXIT_SUCCESS;
}

void input_business_card(Info* lp)
{
    for (int i = 0; i < MAX; i++)
    {
        printf("%d번째 사원 정보를 입력하세요.\n", i + 1);
        printf("사원 이름 : ");
        scanf("%s", lp[i].name);
        printf("전화 번호 : ");
        scanf("%s", lp[i].phone);
        printf("이메일 주소 : ");
        scanf("%s", lp[i].mail);
        
        for (int i = 0; i < MAX; i++)
        {
            lp[i].number = i+1;
        }
    }
    
}


void show_all_cards(Info* lp)
{

    for (int i = 0; i < MAX; i++)
    {
        printf("======= %d 번째 사원 정보 ==========\n", i + 1);
        printf("명함번호 : %d\n", lp[i].number);
        printf("사원 이름 : %s\n", lp[i].name);
        printf("전화 번호 : %s\n", lp[i].phone);
        printf("이메일 주소 : %s\n", lp[i].mail);
        printf("===================================\n");
    }
}

void search_business_card(Info*lp,int num)
{
    for (int i = 0; i < MAX; i++)
    {

        if (lp[i].number == num)
        {
            printf("========= 검색한 사원 정보==========\n");
            printf("명함번호 : %d\n", lp[i].number);
            printf("사원 이름 : %s\n", lp[i].name);
            printf("전화 번호 : %s\n", lp[i].phone);
            printf("이메일 주소 : %s\n", lp[i].mail);
            printf("===================================\n");
        }
        else
        {
            continue;
        }
    }
}

void edit_business_card(Info* lp,int num)
{
    char c_phone;
    char c_mail;

    for (int i = 0; i < MAX; i++)
    {

        if (lp[i].number == num)
        {
            printf("========= 수정할 사원 정보==========\n");
            printf("명함번호 : %d\n", lp[i].number);
            printf("사원 이름 : %s\n", lp[i].name);
            printf("전화 번호 : %s\n", lp[i].phone);
            printf("이메일 주소 : %s\n", lp[i].mail);
            printf("===================================\n");

            printf("수정할 전화번호를 입력하세요 : \n");
            scanf("%s", lp[i].phone);
            printf("수정할 메일 주소를 입력하세요 : \n");
            scanf("%s", lp[i].mail);
        }
        else
        {
            continue;
        }


    }

}