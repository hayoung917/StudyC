/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�,���� ���� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Hayoung Lee.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����Լ�
int main(void) 
{
    //FILE* fp;
    //int ch;

    //fp = fopen("a.txt", "r");
    //if (fp == NULL)
    //{
    //    printf("������ ������ �ʾҽ��ϴ�.\n");
    //    return 1;
    //}

    ////while (1)
    ////{
    ////    ch = fgetc(fp);
    ////    if (ch == EOF)
    ////    {
    ////        break;
    ////    }
    ////    putchar(ch);
    ////}

    //while ((ch = fgetc(fp)) != EOF) //�ڵ� ����
    //    putchar(ch);
    //fclose(fp);

    //FILE* fp;
    //char str[] = "banana";
    //int i = 0;

    //fp = fopen("b.txt", "w");
    //if (fp == NULL)
    //{
    //    printf("���ϻ��� ����\n");
    //    return 1;
    //}

    //while (str[i] != '\0')
    //{
    //    fputc(str[i],fp);
    //    i++;
    //}
    //fputc('\n',fp);
    //fclose(fp);

    //int ch;

    //while (1)
    //{
    //    ch = fgetc(stdin);
    //    if (ch == EOF)
    //    {
    //        break;
    //    }
    //    fputc(ch, stdout);
    //}
    //fclose(ch);

    //FILE* fp;
    //int ary[10] = { 13, 10, 13, 10, 10, 27, 13, 13, 10, 10 };
    //int res;

    //fp = fopen("c.txt", "wb");

    //for (int i = 0; i < 10; i++)
    //{
    //    fputc(ary[i], fp);
    //}
    //fclose(fp);

    //fp = fopen("c.txt", "rt");
    //while (1)
    //{
    //    res = fgetc(fp);
    //    if (res == EOF)
    //    {
    //        break;
    //    }
    //    printf("%5d", res);
    //}
    //fclose(fp);

    FILE* fp;
    char str[20];

    fp = fopen("d.txt", "a+");
    if (fp == NULL)
    {
        printf("���� ����\n");
        return EXIT_FAILURE;
    }

    while (1)
    {
        printf("���� �̸� : ");
        scanf("%s", str);
        if (strcmp(str, "end") == 0)
        {
            break;
        }
        else if (strcmp(str, "list") == 0)
        {
            rewind(fp);//fseek(fp, 0, SEEK_SET);
            while (1)
            {
                fgets(str, sizeof(str), fp);
                if (feof(fp))
                {
                    break;
                }
                printf("%s", str);
            }
        }
        else
        {
            fprintf(fp, "%s\n", str);
        }
    }
    fclose(fp);


	system("pause");
	return EXIT_SUCCESS;
}