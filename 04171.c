//输入字符串，求长度 
#include<stdio.h>
int main()
{
	int fun(char *p);
	char m[100], *s = m;
	scanf("%s",s);
	printf("str = %s\nlength = %d\n",m,fun(s));
}
int fun(char *p)
{
	char *k = p;
	while(*p)
		p++;
	return(p-k);
}
