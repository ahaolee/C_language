/*#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
		a[i]=i;
	for(i=0;i<5;i++)
		printf("a[%d] = %d\n",i,a[i]);
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
		*(a+i) = i;
	for(i=0;i<5;i++)
		printf("a[%d] = %d\n",i,*(a+i));
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int a[5],i,*p;
	p = a;
	for(i=0;i<5;i++)
		*(p+i) = i;
	for(i=0;i<5;i++)
		printf("a[%d] = %d\n",i,*(p+i));
}*/
#include<stdio.h>
/*int main()
{
	int a[5],i,*p=a;
	for(i=0;i<5;)
	{
		*p = i;
		printf("a[%d]= %d\n",i++,*p++);
	}
	return 0;
}*/
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5},*p=a;
	printf("%d\n",((*p)++));			//++(*p)  µÈ¼ÛÓÚ  *p = ++(*p) 
	printf("%d",a[0]);
	return 0;
}
