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
	struct employee *ps;    //����һ��employee���͵Ľṹ����������ָ�� 
	printf("No\tName\t\tSex\tgongzi\t\n");
	for(ps = person;ps < person + 5;ps++)    
	//psָ��person����ĵ�һ��Ԫ��,�ṹ������ĵ�һ��Ԫ�ؼ�һ���ṹ����� 
	{
		printf("%d\t%s\t%c\t%d\t\n",ps->num,ps->name,ps->sex,ps->wage);
		//��ʱָ���һ���ṹ�����,��������ṹ������ĳ�Ա��ֵ 
	}
	return 0;
}
