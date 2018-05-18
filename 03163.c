//计算圆的面积 
#include <stdio.h>
float s;
void round1(float r)
{
	s=3.1415926*r*r;
}
void main()
{
	float x;
	printf("Please input Radius of the circle :");
	scanf("%f",&x); 
	round1(x);
	printf("\n------------------------------------\n");
	printf("\nThe area of the circle is:%.3f\n",s);
}
