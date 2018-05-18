/*#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;
	*p = 20;
	//printf("%d\n",(int)sizeof(p));
	printf("%p\n",&a);
	printf("%p\n",p);
	return 0;
}*/
#include<stdio.h>
int change(int *p)
{
	*p = 100;
}
int main()
{
	int a= 10;
	change(&a);
	printf("%d\n",a);
}
