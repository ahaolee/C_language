#include<stdio.h>
void swap(int *p1,int*p2)
{
	int temp;
	temp = *p1;
	*p1  = *p2;
	*p2  = temp;
}
void exchange(int *q1,int *q2,int *q3)			 
{
	if(*q1<*q2)			 
		swap(q1,q2);		//��q1,q2�����ڵĵ�ַ����swap���� 
	if(*q1<*q3)				//��a��b��ֵ���бȽϺ�ֵ�������󣬽���a��c��ֵ�Ƚ� 
		swap(q1,q3);
	if(*q2<*q3)
		swap(q2,q3);
}
int main()
{
	int a,b,c,*pa,*pb,*pc;		//��������������ָ����� 
	printf("Please input a,b and c:");
	scanf("%d%d%d",&a,&b,&c);		//�Ӽ��̽�������������ֵ 
	pa = &a;			//ָ�����pa�������a�ĵ�ַ 
	pb = &b;			//ָ�����pb�������b�ĵ�ַ 
	pc = &c;			//ָ�����pc�������c�ĵ�ַ 
	exchange(pa,pb,pc);	//��ʵ��pa,pb,pc����exchange���� 
	printf("outpud: %d,%d,%d\n",a,b,c);
	return 0;
}
