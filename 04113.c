#include<stdio.h>
int fun(char *s,char a,int n)
{
	int j;
	*s = a;    //��sָ���������е�ַ������sָ��c[0]�ĵ�ַ��Ϊc[0]��ֵΪ'E'=69 
	j = n;		//j=5
	while(*s < s[j])		//����sָ��ĵ�ַ��ֵ��69��s[j]��sָ��������c[j]  c[5]δ��ֵ ,Ĭ��Ϊ0,,,while����Ϊ�٣���ִ�� 
		j--;
	return j;    //j��ֵ����Ϊ5 
}
int main()
{
	char c[6];
	int i;
	for(i = 1;i <= 5;i++)
		*(c + 2) = 'A' + i + 1;
		//1.'A'=65    2.c��һ�����飬*(c+2)�Ա�ʾc[2]������c[2]��ֵ��ִ����forѭ����c[2]=71 
	printf("%d\n",fun(c,'E',5));    //Ϊfun��������ʵ�Σ�c[]���� ,'E'=69,5 
	printf("%d",c[5]); 
	return 0;
}
