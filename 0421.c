#include<stdio.h>
int func(char *q)
{
	char max,min;
	char maxpos,minpos;
	char *p;
	int i,j,k;
	max = min = *p;
	for(i = 1;i<10;i++){
		if(*(p+1)>max){
			max = *(p+i);
			maxpos = i+1;
		}
		if(*(p+1)<min){
			min = *(p+i);
			minpos = i+1;
		}
		k = *q;
		*q = *(q+min);
		*(q+min) = k;
		
		j = *(q+9);
		*(q+9) = *(q+max);
		*(q+max) = j;
	}
}
int main()
{
	char str[10];
	getchar(str);
	printf("%s\n",str);
}
