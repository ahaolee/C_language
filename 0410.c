#include<stdio.h>
#include<string.h>
void sort(char *name[],int n);
int main()
{
	char *name[] = {"Follow me","BASIC","Great Wall","EORTRAN","Abs","Computer design"};
	int i,n = 6;
	sort(name,n);
	for(i=0;i<n;i++)
	{
		printf("%s",name[i]);
		printf("\n");
	}
	return 0;
}
void sort(char *name[],int n)
{
	char *temp;
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		k = i;
		for(j=i+1;j<n;j++)
			if(strcmp(name[k],name[j])>0)    //if name[k]>name[j] 
			//strcmp(a,b)���a=b,����0,���a<b����-1�����a>b,����1
			//name[k] �� name[j]��ָ�������ֵΪ�ַ�����ַ,name[k]��"FOllow me"��ָ�� 
			//strcmp()�Ĳ���������char*
			//name[k] name[i]��ֵ������name[k]�ڵ�ֵ(ָ��)��������ָ����ַ���Ҳ�ı� 
				k = j;
		if(k != i)
		{
			temp = name[i];
			name[i] = name[k];
			name[k] = temp;
		}
	}
}
