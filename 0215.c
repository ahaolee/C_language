#include<stdio.h>
void print(long n)
{	long i=n;
	if(n==0)
		return ;
	else
		{
			printf("%d",n%10);
			print(n/10);
			return;
		}
 }
 void main()
 {
	long n;
	printf("ÇëÊäÈëÕûÊın£º");
	scanf("%ld",&n);
	print(n);
  } 
