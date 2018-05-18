#include<stdio.h>
struct employee
{
	int num;
	char name[20];
	char sex;
	int wage;
}person[5] = 
{
	{101,"huang ming",'M',3000},
	{102,"zhao hong",'M',5000},
	{103,"he li fang",'F',3500},
	{104,"cheng ling",'F',4500},
	{105,"wang hai",'M',6000},
};
main()
{
	struct employee *ps;    //定义一个employee类型的结构体数据类型指针 
	printf("No\tName\t\tSex\tgongzi\t\n");
	for(ps = person;ps < person + 5;ps++)    
	//ps指向person数组的第一个元素,结构体数组的第一个元素即一个结构体变量 
	{
		printf("%d\t%s\t%c\t%d\t\n",ps->num,ps->name,ps->sex,ps->wage);
		//此时指向第一个结构体变量,依次输出结构体变量的成员的值 
	}
	return 0;
}
