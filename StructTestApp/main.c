/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�/����� ���� �ڷ���Structure�н�
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct student
//{
//    int num;
//    double grade;
//};
//
//// �����Լ�
//int main(void) 
//{
//    struct student s1;
//
//    s1.num = 11;
//    s1.grade = 4.5;
//    printf("�й� : %d\n", s1.num);
//    printf("���� : %.1lf\n", s1.grade);
//
//	system("pause");
//	return EXIT_SUCCESS;
//}

//struct profile
//{
//    char name[20];
//    int age;
//    double height;
//    char* intro;
//};
//
//int main(void)
//{
//    struct profile p1;
//
//    strcpy(p1.name, "���Ͽ�");
//    p1.age = 28;
//    p1.height = 160.5;
//
//    p1.intro = (char*)malloc(80);
//    printf("�ڱ�Ұ� : ");
//    gets(p1.intro);
//
//    printf("�̸� : %s\n", p1.name);
//    printf("���� : %d\n", p1.age);
//    printf("Ű : %.1lf\n", p1.height);
//    printf("�ڱ�Ұ� : %s\n", p1.intro);
//    
//    free(p1.intro);
//
//    system("pause");
//    return EXIT_SUCCESS;
//}


//struct profile
//{
//    char name[20];
//    int age;
//    double height;
//    char* intro;
//};
//
//struct student
//{
//    struct profile pf;
//    int id;
//    double grade;
//};
//
//int main(void)
//{
//    struct student st1;
//
//    st1.pf.age = 20;
//    st1.pf.height = 160.5;
//    st1.id = 100;
//    st1.grade = 4.5;
//
//    printf("���� : %d\n", st1.pf.age);
//    printf("Ű : %.1lf\n", st1.pf.height);
//    printf("id : %d\n", st1.id);
//    printf("���� : %.1lf\n", st1.grade);
//    
//    system("pause");
//    return EXIT_SUCCESS;
//}

struct student
{
    int id;
    char name[20];
    double grade;
};

int main(void)
{
    struct student s1 = { 315,"ȫ�浿",2.4 },
        s2 = { 316,"�̼���",3.5 },
        s3 = { 317,"�������",4.4 };

    struct student max;

    max = s1;
    if (s2.grade > max.grade)
    {
        max = s2;
    }
    if (s3.grade > max.grade)
    {
        max = s3;
    }

    printf("���̵� %d\n", max.id);
    printf("�̸� %s\n", max.name);
    printf("���� %.1lf\n", max.grade);

    system("pause");
    return EXIT_SUCCESS;

}