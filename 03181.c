#include <stdio.h>
float add,mult;		//ȫ�ֱ���
void fun(float x,float y)
{
	//float add,mult;		//�ֲ����� 
	add=x+y;
	mult=x*y;
 }
void main()
{
	float a,b;
	printf("Please input a and b value:");
	scanf("%f%f",&a,&b);
	fun(a,b);
	printf("add value is:%.2f\t mult value is:%.2f\n",add,mult);
 } 
