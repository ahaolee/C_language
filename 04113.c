#include<stdio.h>
int fun(char *s,char a,int n)
{
	int j;
	*s = a;    //对s指向的数组进行地址操作，s指向c[0]的地址，为c[0]赋值为'E'=69 
	j = n;		//j=5
	while(*s < s[j])		//返回s指向的地址的值：69，s[j]即s指向的数组的c[j]  c[5]未赋值 ,默认为0,,,while条件为假，不执行 
		j--;
	return j;    //j的值还是为5 
}
int main()
{
	char c[6];
	int i;
	for(i = 1;i <= 5;i++)
		*(c + 2) = 'A' + i + 1;
		//1.'A'=65    2.c是一个数组，*(c+2)对表示c[2]，即对c[2]赋值，执行完for循环后，c[2]=71 
	printf("%d\n",fun(c,'E',5));    //为fun函数传入实参，c[]数组 ,'E'=69,5 
	printf("%d",c[5]); 
	return 0;
}
