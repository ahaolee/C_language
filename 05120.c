#include<stdio.h>
main()
{
	struct employee
	{
		int num;
		char name[20];
		char sex;
		int wage;
	}person2,person1 = {102,"zhao hong",'M',5000};
	person2 = person1;
	printf("Number = %d\nName = %s\n",person2.num,person2.name);
	printf("Sex = %c\ngongzi = %d\n",person2.sex,person2.wage);
	return 0;
}
