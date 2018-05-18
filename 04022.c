#include<stdio.h>
int main()
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int *p,i,j;
	p = a[0];
	for(i = 0;i < 3;i++)
	{
		for(j = 0;j < 3;j++)
			printf("%4d",*p++);
			//printf("%4d",*(*(a+i)+j));
			//printf("%4d",*(a[i]+j));
			//printf("%4d",(*(a+i))[j]);
			printf("\n");		//在执行完一组行元素后执行\n换行 
	}
	return 0;
}
