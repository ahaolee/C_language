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
	}*zg;    //����һ���ṹ��Ϊemployee�ṹ��ָ�����,ֻ������ָ�����ͣ����������ռ��ַ 
	zg = (struct employee *) malloc(sizeof(struct employee));    
	//����һ�鳤��Ϊemployee�ṹ��  �ڴ�ռ䣬��ת��Ϊ�ṹ�����ݽṹ�����ڴ��׵�ַ����zg 
	zg -> num = 12;    //�൱��zg.num
	strcpy(zg->name,"zhao hong");
	zg->sex = 'M';
	zg->wage = 5000;
	printf("Number = %d\nName = %s\n",zg->num,zg->name);
	printf("Sex = %c\ngongzi = %d\n",zg->sex,zg->wage);
	return 0;
	free(zg); 
}
