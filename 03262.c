#include<stdio.h>
void swap(int *p1,int*p2)
{
	int temp;
	temp = *p1;
	*p1  = *p2;
	*p2  = temp;
}
void exchange(int *q1,int *q2,int *q3)			 
{
	if(*q1<*q2)			 
		swap(q1,q2);		//将q1,q2变量内的地址赋给swap函数 
	if(*q1<*q3)				//对a和b的值进行比较和值交换过后，进行a和c的值比较 
		swap(q1,q3);
	if(*q2<*q3)
		swap(q2,q3);
}
int main()
{
	int a,b,c,*pa,*pb,*pc;		//定义三个变量和指针变量 
	printf("Please input a,b and c:");
	scanf("%d%d%d",&a,&b,&c);		//从键盘接收三个变量的值 
	pa = &a;			//指针变量pa储存变量a的地址 
	pb = &b;			//指针变量pb储存变量b的地址 
	pc = &c;			//指针变量pc储存变量c的地址 
	exchange(pa,pb,pc);	//将实参pa,pb,pc赋给exchange函数 
	printf("outpud: %d,%d,%d\n",a,b,c);
	return 0;
}
