#include<stdio.h>
void inv(int *x, int n)		//xָ������a���׵�ַ������Ϊ10 
{
	int *p,temp,*f,*r,m=(n+1)/2; 	//(n+1)/2��(n-1)/2������ 
	f = x;			//fָ������a���׵�ַ 
	r = x+n-1;		//��ַ��Ӽ���rָ���������һ��Ԫ�ص�ַ 
	p = x+m;		//mΪ�м�Ԫ�صĵ�ַ ,(n-1)/2Ϊ���� ,pΪ��m+1��Ԫ�� 
	for(;f<=p;f++,r--)
	{
		temp = *f;		//tempΪ�����һ��Ԫ�ص�ֵ 
		*f = *r;		//����һ��Ԫ�ص�ֵ�����һ��Ԫ�ص�ֵ����
		*r = temp;		//����һ��Ԫ�ص�ֵ�����һ��Ԫ�ص�ֵ���� 
	}
}
int main()
{
	int i,a[]={3,7,9,11,0,6,7,5,4,2};
	printf("The original array:\n");
	for(i=0;i<10;i++)
		printf("%d,",a[i]);
	printf("\n");
	inv(a,10);
	printf("The array has been inverted:\n");
	for(i=0;i<10;i++)
		printf("%d,",a[i]);
	printf("\n");
	return 0;
}
