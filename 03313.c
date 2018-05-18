#include<stdio.h>
void inv(int *x, int n)		//x指向数组a的首地址，长度为10 
{
	int *p,temp,*f,*r,m=(n+1)/2; 	//(n+1)/2和(n-1)/2都可以 
	f = x;			//f指向数组a的首地址 
	r = x+n-1;		//地址相加减，r指向数组最后一个元素地址 
	p = x+m;		//m为中间元素的地址 ,(n-1)/2为整除 ,p为第m+1个元素 
	for(;f<=p;f++,r--)
	{
		temp = *f;		//temp为数组第一个元素的值 
		*f = *r;		//将第一个元素的值和最后一个元素的值互换
		*r = temp;		//将第一个元素的值和最后一个元素的值互换 
	}
}
int main()
{
	int i,a[]={3,7,9,11,0,6,7,5,4,2};
	printf("The original array:\n");
	for(i=0;i<10;i++)
		printf("%d,",a[i]);
	printf("\n");
	inv(a,10);
	printf("The array has been inverted:\n");
	for(i=0;i<10;i++)
		printf("%d,",a[i]);
	printf("\n");
	return 0;
}
