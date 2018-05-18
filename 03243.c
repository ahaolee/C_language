#include<stdio.h>
int main()
{
	int a;
	int *pa;	//定义指针变量pa 
	pa = &a;	//变量pa取a的地址 
	a = 7;
	printf("a的地址是：%p\npa的值是:%p\n",&a,pa);	//pa的值是一个地址 
	printf("a的值是：%p\n*pa的值是：%p\n",a,*pa);	//*pa的值是期指向的变量的值 
	return 0;
}
