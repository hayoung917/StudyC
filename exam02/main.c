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

void input_business_card(Info* lp);
void show_all_cards(Info* lp);
void search_business_card(Info* lp, int num);
void edit_business_card(Info* lp, int num);
void delete_business_card(Info* lp, int num);
void savelist(Info* lp, int num);
void loadlist(Info* lp, int num);

int count = 0;

// 메인함수
int main(void)
{
    int input = 0;
    int num = 0;
    Info list[MAX];


    while (1)
    {
        printf("1.입력\n2.수정\n3.삭제\n4.전체출력\n5.검색\n6.종료\n");
        scanf("%d", &input);


        switch (input)
        {
        case 1:
            input_business_card(list);
            break;

        case 2:
            printf("수정할 명함번호 입력 : ");
            scanf("%d", &num);
            edit_business_card(list, num);
            break;

        case 3:
            printf("삭제할 명함번호 입력 : "); 
            scanf("%d", &num);
            delete_business_card(list, num);
            break;

        case 4:
            show_all_cards(list);
            break;

        case 5:
            printf("검색할 명함번호를 입력해주세요 : ");
            scanf("%d", &num);
            search_business_card(list, num);
            break;

        case 6:
            exit(1);
            break;

        default:
            break;
        }
    }

    savelist(list, MAX);
    loadlist(list, MAX);


    system("pause");
    return EXIT_SUCCESS;
}

void savelist(Info* lp, int num)
{
    FILE* fp;

    fp = fopen("card_data.txt", "w+");
    if (fp == NULL)
    {
        printf("파일 오픈 실패\n");
    }

    for (int i = 0; i < MAX; i++)
    {
        fwrite(&lp[i], sizeof(lp), 1, fp);
    }

    fclose(fp);
}

void lodelist(Info* lp, int num)
{
    FILE* fp;
    fp = fopen("card_data.txt", "r");

    for (int i = 0; i < MAX; i++)
    {
        fread(&lp[i], sizeof(lp), 1, fp);
    }

    fclose(fp);
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
            lp[i].number = i + 1;
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

void search_business_card(Info* lp, int num)
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

void edit_business_card(Info* lp, int num)
{
    for (int i = 0; i < MAX; i++)
    {
        if (lp[i].number != num)
        {
            printf("값없음");
        }
        else
        {
            printf("========= 수정할 사원 정보==========\n");
            printf("명함번호 : %d\n", lp[i].number);
            printf("사원 이름 : %s\n", lp[i].name);
            printf("전화 번호 : %s\n", lp[i].phone);
            printf("이메일 주소 : %s\n", lp[i].mail);
            printf("===================================\n");

            printf("수정할 전화번호를 입력하세요 : ");
            scanf("%s", lp[i].phone);
            printf("수정할 메일 주소를 입력하세요 : ");
            scanf("%s", lp[i].mail);
        }
    }
}

void delete_business_card(Info* lp, int num)
{
    for (int i = 0; i < MAX; i++)
    {
        if (lp[i].number != num)
        {
            printf("값없음\n");

        }
        else
        {
            printf("========= 삭제할 사원 정보==========\n");
            printf("명함번호 : %d\n", lp[i].number);
            printf("사원 이름 : %s\n", lp[i].name);
            printf("전화 번호 : %s\n", lp[i].phone);
            printf("이메일 주소 : %s\n", lp[i].mail);
            printf("===================================\n");

            for (int j = 0; j < MAX - 1; j++)
            {
                lp[j] = lp[j + 1];
            }
        }
    }
}