//��дһ�����������������ĺ����
#include <stdio.h>
float add,mult;		// ȫ�ֱ���
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
	printf("sum value��%.2f\nproduct value:%.2f\n",add,mult);
}
