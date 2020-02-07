/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수/Structure 반환값 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct vision
{
    double left;
    double right;
};

struct vision exchange(struct vision robot);

int main(void)
{
    struct  vision robot;
    printf("시력 입력 : ");
    scanf("%lf %lf", &(robot.left), &(robot.right));
    printf("처음 시력 : %.1lf, %.1lf\n", robot.left, robot.right);

    robot = exchange(robot);
    printf("바뀐 시력 : %.1lf, %.1lf\n", robot.left, robot.right);
    
    system("pause");
    return EXIT_SUCCESS;

}

struct vision exchange(struct vision robot)
{
    double temp;

    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}