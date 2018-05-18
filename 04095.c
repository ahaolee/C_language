#include<stdio.h>
int main()
{
	float f = 6;
	float **pp,*p;
	p = &f;
	pp = &p;
	printf("f = %f\n f = %f\n f = %f\n",f,*p,**pp);
	return 0;
}
