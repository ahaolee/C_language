#include<stdio.h>
float aver(float *pa, int n);	//定义求平均值函数
int main()
{
	float s[5],av,*sp;
	int i;
	sp =s;			//用指针变量sp来存储数组s的首地址 
	printf("input five data:");
	for(i=0;i<5;i++)
		scanf("%f",&s[i]);
	av = aver(sp,5);		//实参为*sp指针变量，长度为5 
	printf("average is %5.2f.",av);
	return 0;
 } 
float aver(float *pa, int n)
{
	int i;
	float av,sum=0;
	for(i=0;i<n;i++)
		sum += *pa++;		//等价于sum+=*(pa++);
	av = sum / n;
	return av; 
}
