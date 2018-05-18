#include<stdio.h>
#include<malloc.h>
#include<string.h>
main()
{
	struct employee
	{
		int num;
		char name[20];
		char sex;
		int wage;
	}*zg;    //建立一个结构体为employee结构的指针变量,只是申明指针类型，并不赋给空间地址 
	zg = (struct employee *) malloc(sizeof(struct employee));    
	//开辟一块长度为employee结构的  内存空间，并转化为结构体数据结构，将内存首地址赋给zg 
	zg -> num = 12;    //相当于zg.num
	strcpy(zg->name,"zhao hong");
	zg->sex = 'M';
	zg->wage = 5000;
	printf("Number = %d\nName = %s\n",zg->num,zg->name);
	printf("Sex = %c\ngongzi = %d\n",zg->sex,zg->wage);
	return 0;
	free(zg); 
}
