#include "string.h"
#include "stdio.h"
#define N 3
struct employee    //定义一个结构体 
{
	int num;
	char name[20];
	char sex;
};
main()    //结构体变量定义及赋值，以及传值 
{
	void out(struct employee per[],int n);    //函数声明
	struct employee per[N] = 
	{
		{2014,"wanghuiyi",'F'},
		{2012,"lihongfei",'M'},
		{2011,"huangming",'F'},
	};
	struct employee *S;    //定义一个指向struct employee类型数据的指针 
	S = per;    //指针S指向结构体数组per; 
	out(S,N);    //结构体指针变量作实参,N为指定的要处理的元素个数 
	return 0; 
}
void out(struct employee per[],int n)     //结构体指针数组作为函数形参
{
	int i;
	for(i = 0;i < n;i++)
	{
		printf("%d\t%s\t%c\n",per[i].num,per[i].name,per[i].sex);
	}
 } 
