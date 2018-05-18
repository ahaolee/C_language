#include<stdio.h>
int fun(char *s)
{
	char *p = s;    //定义一个字符串p，将s存储的地址赋给p 
	while(*p)    //去返回变量p的指向的地址的值 
		p++;	//使p指向字符串的后一个元素
		//(p+1)指向b......(p+5)后指向f,然后判断p指向地址的值是否为'\0'，否，(p+6)后指向'\0',while为假 
		return(p-s);				//((p+6)-s),p=s,结果为6 
}
int main()
{
	char *a = "abcdef";    //定义一个指针变量a指向字符串的首地址 
	printf("%5d\n",fun(a));    //调用fun()函数,传入实参a,即字符串的指针 
	return 0;
}
