#include<stdio.h>
struct employee
{
	int num;
	char name[20];
	char sex;
	int wage;
}person[5] =   //为结构体数组每个成员赋值 
{
{101,"huang ming",'M',3000},
{102,"zhao hong",'M',5000},
{103,"he li fang",'F',3500},
{104,"cheng ling",'F',4500},
{105,"wang hai",'M',6000},
};
main()
{
	int i;
	float ave,s = 0;
	for(i = 0;i < 5;i++)
	{
		s += person[i].wage;
	}
	printf("s = %f\n",s);
	ave = s / 5;
	printf("ave gongzi = %f\n",ave);
	return 0;
}
