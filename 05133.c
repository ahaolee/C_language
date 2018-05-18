#include<stdio.h>
#include<stdlib.h>
void main()
{
	char ch;
	FILE *fp;
	fp = fopen("C:\\Users\\1818m\\Desktop\\456.xls","r");
	if(fp != NULL)
	{
		printf("文件已打开。\n");
		ch = fgetc(fp);
		while(ch != EOF)
		{
			putchar(ch);
			ch = fgetc(fp);
		}
	}
	else
	{
		printf("%s文件不存在。\n","C:\\Users\\1818m\\Desktop\\456.xls");
		getchar();
		exit(1);
	}
	fclose(fp);
 } 
