#include<stdio.h>
void sort(int *p, int n);
int main()
{
	int a[10],i;
	printf("请输入10个整数：");
	for(i = 0;i < 10; i++)
		scanf("%d",&a[i]);
	printf("排序前：");
	for(i = 0;i < 10;i++)
		printf("%d,",a[i]);
	sort(a,10);
	printf("\n排序后：");
	for(i = 0; i < 10; i++)
		printf("%d,",a[i]);
}
void sort(int *p, int n)
{
	int i, j, k, temp;
	for(i = 0;i < n-1;i++)
	{
		k = i;
		for(j = i+1;j < n;j++)
			if(*(p+k) > *(p+j))
				k = j;
		if(k != i)
		{
			temp = *(p+i);
			*(p+i) = *(p+k);
			*(p+k) = temp;	
		}
	}
}
