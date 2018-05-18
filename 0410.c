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
			//strcmp(a,b)如果a=b,返回0,如果a<b返回-1，如果a>b,返回1
			//name[k] 、 name[j]是指针变量，值为字符串地址,name[k]是"FOllow me"的指针 
			//strcmp()的参数类型是char*
			//name[k] name[i]的值交换，name[k]内的值(指针)交换，所指向的字符串也改变 
				k = j;
		if(k != i)
		{
			temp = name[i];
			name[i] = name[k];
			name[k] = temp;
		}
	}
}
