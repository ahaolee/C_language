#include "stdio.h"
int func1()
{
	static int s=1;		//静态局部变量 
	s+=2;
	return(s);
 }
int func2()
{
	int s=1;			//局部变量 
	s+=2;
	return(s);
 }
void main()
{
	int i;
	printf("s value is:");
	for(i=0;i<3;i++)
		printf("%d\t",func1());
	printf("\n");
	printf("s value is:");
	for(i=0;i<3;i++)
		printf("%d\t",func2());
 } 
