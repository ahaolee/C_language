/**file1.c��**/
#include "stdio.h"
static int s=5;			//��̬ȫ�ֱ���
extern void func(int z);	//ʹfunc�������ļ�file1.c�пɼ�
void main()
{
	func(3);
	printf("%d",s);
 }
/**file2.c��**/
extern int s;	//��extern��s����
void func(int a)
{
	s+=a;
 } 
