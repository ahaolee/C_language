//编写一个函数，求两个数的和与积
#include <stdio.h>
float add,mult;		// 全局变量
void func(float x, float y)
{
	add=x+y;
	mult= x*y;
 }
void main()
{
	float a, b;
	printf("Please input a and b value:");
	scanf("%f%f",&a,&b);
	func(a,b);
	printf("sum value：%.2f\nproduct value:%.2f\n",add,mult);
}
