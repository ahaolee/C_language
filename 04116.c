#include<stdio.h>
void sub(char *a,char b)
{
	while(*(a++) != '\0');
	while(*(a - 1) < b)
		*(a--) = *(a-1);
	*(a--) = b;
}
int main()
{
	char s[] = "97531",c;
	c = getchar();
	sub(s,c);
	puts(s);
	return 0;
}
