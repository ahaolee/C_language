#include<stdio.h>
int strlength(char *s);
int main()
{
	char str[20], *ch = str;
	printf("input string:");
	scanf("%s",str);
	printf("string length = %d\n",strlength(ch));
	return 0;
}
int strlength(char *s)
{
	char *p = s;
	while(*p)
		p++;
	return(p-s);
}
