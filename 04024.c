
/*int main()
{
	char *ps = "this is a book";
	int n = 10;
	ps = ps + n;
	printf("%s\n",ps);
	return 0;
}*/
#include<stdio.h>
int main()
{
	char st[20],*ps;
	int i;
	ps = st;
	printf("input a string:\n");
	scanf("%s",ps);
	for(i = 0;ps[i] != '\0';i++)		//��i��ֵ���ӵ�������ps[i]!='\0'ʱ�˳�ѭ������ps[i]=='\0'ʱ�˳�ѭ�� 
		if(ps[i] == 'k')
		{
			printf("There is a 'k' in the string\n");
			break;
		}
		if(ps[i] == '\0')
			printf("There is no 'k' in the string\n");
	return 0;
}
