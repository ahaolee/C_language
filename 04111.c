#include<stdio.h>
int max(int a,int b)
{
	if(a > b)
		return a;
	else
		return b;
}
int main()
{
	int (*pmax)();
	int x,y,z;
	pmax = max;
	printf("plz input two numbers:\n");
	scanf("%d%d",&x,&y);
	z = (*pmax)(x,y);
	printf("max = %d",z);
	return 0;
}
