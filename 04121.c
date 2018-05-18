#include<stdio.h>
int fun(char *s)
{
	char *p = s;
	while(*p)
		p++;
	return(p-s);
}
int main()
{
	char *a,s[10];
	int i;
	a = s;
	for(i=0;i<10
	;i++)
		s[i]=getchar();
	printf("%d\n",fun(a)-1);
	return 0;
}
