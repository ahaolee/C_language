#include<stdio.h>
main()
{
	struct employee
	{
		int num;
		char name[20];
		char sex[5];
		int wage;
	}person1,person2;
	person1.num = 102;
	printf("input name sex and gongzi\n");
	scanf("%s",&person1.name);
	scanf("%s",&person1.sex);
	scanf("%d",person1.wage);
	person2 = person1;
	printf("Number = %d\nName = %s\n",person2.num,person2.name);
	printf("Sex = %s\nGongzi = %d\n",person2.sex,person2.wage);
	return 0;
}
