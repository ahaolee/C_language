#include<stdio.h>
int x,y;
one()
{
	int a, b;
	a = 25,b = 10;
	x = a-b;
	y = a+b;
}
main()
{
	int a, b;
	a = 9,b = 5;
	x = a+b;
	y = a-b;
	one();
	printf("%d,%d\n",x,y);
}
