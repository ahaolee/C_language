#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	if((fp = fopen("C:\\Users\\1818m\\Desktop\\123.txt","wt+"))== NULL)
	{
		printf("Cannot open file strike any key exit");
		getchar();
		exit(1);
	}
	printf("input a string:\n");
	ch = getchar();
	while(ch != '\n')
	{
		fputs(ch,fp);
		ch = getchar();
	}
	rewind(fp);
	ch = fgetc(fp);
	while(ch != EOF)
	{
		putchar(ch);
		ch = fgetc(fp);
	}
	printf("\n");
	fclose(fp);
}
