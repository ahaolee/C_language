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
	printf("请输入整数n：");
	scanf("%ld",&n);
	print(n);
  } 
  /*input=725
  	void print（725）执行else print(725/10)此时n=725
	void print(72) 执行else print(72/10)此时n=72
	void print(7) 执行else print(7/10) 此时n=7
	void print(0) 执行if(n==0)return
	继而执行n=7,printf(n%10的值)……
	打印结果为725*/
