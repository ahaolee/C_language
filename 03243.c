#include<stdio.h>
int main()
{
	int a;
	int *pa;	//����ָ�����pa 
	pa = &a;	//����paȡa�ĵ�ַ 
	a = 7;
	printf("a�ĵ�ַ�ǣ�%p\npa��ֵ��:%p\n",&a,pa);	//pa��ֵ��һ����ַ 
	printf("a��ֵ�ǣ�%p\n*pa��ֵ�ǣ�%p\n",a,*pa);	//*pa��ֵ����ָ��ı�����ֵ 
	return 0;
}
