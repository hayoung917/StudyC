/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/����
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


// �����Լ�
int main(void) 
{
    int input = 0;
    int num=0;

    Info list[MAX];


    while (1)
    {
        printf("1.�Է�\n2.����\n3.����\n4.��ü���\n5.�˻�\n6.����\n");
        scanf("%d", &input);

        switch (input)
        {
        case 1 :
            input_business_card(list);
            break;

        case 2 :
            printf("������ ���Թ�ȣ �Է� : ");
            scanf("%d", &num);
            edit_business_card(list, num);
            break;

        case 3 :
            break;

        case 4 :
            show_all_cards(list);
            break;

        case 5 :
            printf("�˻��� ���Թ�ȣ�� �Է����ּ��� : ");
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
        printf("%d��° ��� ������ �Է��ϼ���.\n", i + 1);
        printf("��� �̸� : ");
        scanf("%s", lp[i].name);
        printf("��ȭ ��ȣ : ");
        scanf("%s", lp[i].phone);
        printf("�̸��� �ּ� : ");
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
        printf("======= %d ��° ��� ���� ==========\n", i + 1);
        printf("���Թ�ȣ : %d\n", lp[i].number);
        printf("��� �̸� : %s\n", lp[i].name);
        printf("��ȭ ��ȣ : %s\n", lp[i].phone);
        printf("�̸��� �ּ� : %s\n", lp[i].mail);
        printf("===================================\n");
    }
}

void search_business_card(Info*lp,int num)
{
    for (int i = 0; i < MAX; i++)
    {

        if (lp[i].number == num)
        {
            printf("========= �˻��� ��� ����==========\n");
            printf("���Թ�ȣ : %d\n", lp[i].number);
            printf("��� �̸� : %s\n", lp[i].name);
            printf("��ȭ ��ȣ : %s\n", lp[i].phone);
            printf("�̸��� �ּ� : %s\n", lp[i].mail);
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
            printf("========= ������ ��� ����==========\n");
            printf("���Թ�ȣ : %d\n", lp[i].number);
            printf("��� �̸� : %s\n", lp[i].name);
            printf("��ȭ ��ȣ : %s\n", lp[i].phone);
            printf("�̸��� �ּ� : %s\n", lp[i].mail);
            printf("===================================\n");

            printf("������ ��ȭ��ȣ�� �Է��ϼ��� : \n");
            scanf("%s", lp[i].phone);
            printf("������ ���� �ּҸ� �Է��ϼ��� : \n");
            scanf("%s", lp[i].mail);
        }
        else
        {
            continue;
        }


    }

}