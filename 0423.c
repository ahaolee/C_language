//对传送过来的三个数选出最大值和最小值，并通过形参传回调用函数 
#include<stdio.h>
int func(int *p);
int main()
{
	int num[3],i;
	int *s = num;
	for(i=0;i<3;i++)
	{
		scanf("%d",&num[i]);
	}
	func(s);
	/*
	for(i = 0;i < 3;i++)
		printf("%d\t",num[i]);
	*/
	printf("min = %d,max = %d\n",num[0],num[2]);
	return 0;
}
int func(int *p)
{
	int t;
	if(*p > *(p+1))
	{
		t = *p;*p = *(p+1);*(p+1) = t;
	}
	if(*(p+1) > *(p+2))
	{
		t = *(p+1);*(p+1) = *(p+2);*(p+2) = t;
	}
	if(*p > *(p+1))
	{
		t = *p;*p = *(p+1);*(p+1) = t;
	}
}
