/*
  filename - main.c
  version - 1.0
  description - 개인 프로젝트
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - Hayoung Lee
*/
#include <dirent.h>
#include <stdio.h>

void FileList();

int main(void)
{
	FileList();

    /* Pointer to the file */
    FILE* fp1;
    /* Character variable to read the content of file */
    char c;

    /* Opening a file in r mode*/
    fp1 = fopen("D:\\Document\\b.txt", "r");

    /* Infinite loop –I have used break to come out of the loop*/
    while (1)
    {
        c = fgetc(fp1);
        if (c == EOF)
            break;
        else
            printf("%c", c);
    }
    fclose(fp1);

    return 0;
}

void FileList()
{
	DIR* d;
	struct dirent* dir;
	d = opendir("/Document/");
	if (d)
	{
		while ((dir = readdir(d)) != NULL)
		{
			if (dir->d_type == DT_REG)
			{
				printf("%s\n", dir->d_name);
			}
		}
		closedir(d);
	}
}