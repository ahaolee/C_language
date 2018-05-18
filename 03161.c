#include <stdio.h>
void main()
{
	int n,m;
	long cmn(int ,int);		//声明函数
	printf("请输入m,n:");
	scanf("%d%d",&m,&n);
	printf("m,n的组合数：%ld\n",cmn(m,n)); 
}
long jc(int n)		//定义阶乘函数
{
	int i;
	long t;
	t = 1;
	for(i=1;i<=n;i++)
		t*=i;
	return (t);
 }
long cmn(int m,int n)		//定义求组合函数
{
	return(jc(m)/(jc(n)*jc(m-n)));
 } 
