#include<stdio.h>
int main()
{
	int a = 10, b = 20, s, t, *pa,*pb;
	pa = &a;		//将a的地址赋值给pa 
	pb = &b;		//将b的地址赋值给pb 
	s = *pa + *pb;		//将pa，pb指向的变量的值赋给s 
	t = (*pa)*(*pb);	//将pa，pb指向的变量的值相乘赋给t 
	printf("a=%d\nb=%d\na+b=%d\na*b=%d\n",a,b,a+b,a*b);
	printf("s=%d\nt=%d\n",s,t);
	return 0;
}
