#include<stdio.h>
void print(long n)
{
	if(n==0)
		return ;
	else
		{
			print(n/10);
			printf("Output:%d\t",n%10);
			return;
		}
 }
 void main()
 {
	long n;
	printf("����������n��");
	scanf("%ld",&n);
	print(n);
  } 
  /*input=725
  	void print��725��ִ��else print(725/10)��ʱn=725
	void print(72) ִ��else print(72/10)��ʱn=72
	void print(7) ִ��else print(7/10) ��ʱn=7
	void print(0) ִ��if(n==0)return
	�̶�ִ��n=7,printf(n%10��ֵ)����
	��ӡ���Ϊ725*/
