/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/
#include <dirent.h>
#include <stdio.h>

void FileList();

int main(void)
{
	FileList();

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