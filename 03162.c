#include <stdio.h>
long jc(int n)		//������׳˺���
{
	long t;
	if(n==1)
		return 1;
	else
		return n * jc(n-1);
 }
void main()
{
	int n;
	printf("Please input n:");
	scanf("%d",&n);
	printf("Output:%d!=%ld\n",n,jc(n));
}
