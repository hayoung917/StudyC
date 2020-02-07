/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/사용자 정의 자료형Structure학습
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
//// 메인함수
//int main(void) 
//{
//    struct student s1;
//
//    s1.num = 11;
//    s1.grade = 4.5;
//    printf("학번 : %d\n", s1.num);
//    printf("학점 : %.1lf\n", s1.grade);
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
//    strcpy(p1.name, "이하영");
//    p1.age = 28;
//    p1.height = 160.5;
//
//    p1.intro = (char*)malloc(80);
//    printf("자기소개 : ");
//    gets(p1.intro);
//
//    printf("이름 : %s\n", p1.name);
//    printf("나이 : %d\n", p1.age);
//    printf("키 : %.1lf\n", p1.height);
//    printf("자기소개 : %s\n", p1.intro);
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
//    printf("나이 : %d\n", st1.pf.age);
//    printf("키 : %.1lf\n", st1.pf.height);
//    printf("id : %d\n", st1.id);
//    printf("학점 : %.1lf\n", st1.grade);
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
    struct student s1 = { 315,"홍길동",2.4 },
        s2 = { 316,"이순신",3.5 },
        s3 = { 317,"세종대왕",4.4 };

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

    printf("아이디 %d\n", max.id);
    printf("이름 %s\n", max.name);
    printf("학점 %.1lf\n", max.grade);

    system("pause");
    return EXIT_SUCCESS;

}