#include "string.h"
#include "stdio.h"
#define N 3
struct employee    //����һ���ṹ�� 
{
	int num;
	char name[20];
	char sex;
};
main()    //�ṹ��������弰��ֵ���Լ���ֵ 
{
	void out(struct employee per[],int n);    //��������
	struct employee per[N] = 
	{
		{2014,"wanghuiyi",'F'},
		{2012,"lihongfei",'M'},
		{2011,"huangming",'F'},
	};
	struct employee *S;    //����һ��ָ��struct employee�������ݵ�ָ�� 
	S = per;    //ָ��Sָ��ṹ������per; 
	out(S,N);    //�ṹ��ָ�������ʵ��,NΪָ����Ҫ�����Ԫ�ظ��� 
	return 0; 
}
void out(struct employee per[],int n)     //�ṹ��ָ��������Ϊ�����β�
{
	int i;
	for(i = 0;i < n;i++)
	{
		printf("%d\t%s\t%c\n",per[i].num,per[i].name,per[i].sex);
	}
 } 
