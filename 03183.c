/**file1.c中**/
#include "stdio.h"
static int s=5;			//静态全局变量
extern void func(int z);	//使func函数在文件file1.c中可见
void main()
{
	func(3);
	printf("%d",s);
 }
/**file2.c中**/
extern int s;	//用extern对s声明
void func(int a)
{
	s+=a;
 } 
