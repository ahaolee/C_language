#include<stdio.h>
char *day(char *name[],int n);
int main()
{
	char *name[]={"Illegal day","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	char *ps;
	int i;
	printf("input Day Number(>0):\n");
	scanf("%d",&i);
	ps = day(name,i);
	printf("Day is:%2d-->%s\n",i,ps);
	return 0;
}
char *day(char *s[],int n)
{
	char *p,*f;
	p = *s;		//p����s[0]��ֵ��s[0]ֵΪָ���һ���ַ���������׵�ַ 
	//printf("%s\n",p); 
	f = *(s+n);
	if(n<1 || n>7)
		return p;
	else
		return f;
}
