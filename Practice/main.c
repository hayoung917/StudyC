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

#define MONTHS 12
#define YEARS 3
 
// 메인함수
int main(void) 
{
    double year2016[MONTHS] = { -3.2,0.2,7.0,14.1,19.6,23.6,26.2,28.0,23.1,16.1,6.8,1.2 };
    double year2017[MONTHS] = { -1.8,-0.2,6.3,13.9,19.5,23.3,26.9,25.9,22.1,16.4,5.6,-1.9 };
    double year2018[MONTHS] = { -4.0,-1.6,8.1,13.0,18.2,23.1,27.8,28.8,21.5,13.1,7.8,-0.6 };
    
    double data[3][12] = {
    { -3.2,0.2,7.0,14.1,19.6,23.6,26.2,28.0,23.1,16.1,6.8,1.2 },
    { -1.8,-0.2,6.3,13.9,19.5,23.3,26.9,25.9,22.1,16.4,5.6,-1.9 },
    { -4.0,-1.6,8.1,13.0,18.2,23.1,27.8,28.8,21.5,13.1,7.8,-0.6 }
    };

    printf("[Temperature Data]\n");
    printf("Year index : \t");

    for (int i = 1; i <= MONTHS; i++)
    {
        printf("%d\t",i);
    }

    printf("\n");
    for (int i = 0; i < YEARS; i++)
    {
        double sum = 0;
        printf("Year %i     :", i);
        for (int j = 0; j < MONTHS; j++)
        {
            printf("%.1lf\t", data[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("[Yearly average temperatures of 3years]\n");
    for (int i = 0; i < YEARS; i++)
    {
        
        double sum = 0;
        
        for (int j = 0; j < MONTHS; j++)
        {
            sum += data[i][j];
        }
        printf("Year %d : average temperature = %.1lf\n", i, sum / (double)MONTHS);
    }
    printf("\n");
    printf("[Monthly average temperatures of 3 years]\n");
    printf("Year index : \t");

    for (int i = 1; i <= MONTHS; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    printf("Avg temps  : ");
    for (int i = 0; i < MONTHS; i++)
    {
        double sum = 0;
        for (int j = 0; j < YEARS; j++)
        {
            sum += data[j][i];
        }
        printf("%.1lf\t", sum / (double)YEARS);
    }
    printf("\n");
   



	system("pause");
	return EXIT_SUCCESS;
}