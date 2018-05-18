#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct
{
	int num;
	char name[20];
	char sex;
	char job;
	union
	{
		int banji;
		char position[10];
	}category;
}person[2];
void main()
{
	int i;
	for(i = 0;i < 2;i++)
	{
		printf("please input num.%d is num,name,sex,job\n",i);
		scanf("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job);
		if(person[i].job == 's')
			scanf("%d",&person[i].category.banji);
		else if(person[i].job == 't')
			scanf("%s",&person[i].category.position);
		/*此时的共用体变量是处于不同的结构体变量中，第一个输入值赋给person0.category.banji,,第二个输入赋值给person1.category.position
		  C语言中共用体的变量中只能存储一个值，不能单独给同一个共用体不同成员赋值，否则将覆盖先前的成员的值*/
	}
	printf("\n");
	printf("No.  name   sex job class/position\n");
	for(i = 0;i < 2;i++)
	{
		if(person[i].job == 's')
			printf("%-6d%-6s%-5c%-3c%-6d\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.banji);
		else
			printf("%-6d%-6s%-5c%-3c%-6s\n",person[i].num,person[i].name,person[i].sex,person[i].job,person[i].category.position);
	}
}
