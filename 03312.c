#include<stdio.h>
float aver(float *pa, int n);	//������ƽ��ֵ����
int main()
{
	float s[5],av,*sp;
	int i;
	sp =s;			//��ָ�����sp���洢����s���׵�ַ 
	printf("input five data:");
	for(i=0;i<5;i++)
		scanf("%f",&s[i]);
	av = aver(sp,5);		//ʵ��Ϊ*spָ�����������Ϊ5 
	printf("average is %5.2f.",av);
	return 0;
 } 
float aver(float *pa, int n)
{
	int i;
	float av,sum=0;
	for(i=0;i<n;i++)
		sum += *pa++;		//�ȼ���sum+=*(pa++);
	av = sum / n;
	return av; 
}
