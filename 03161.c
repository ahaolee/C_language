#include <stdio.h>
void main()
{
	int n,m;
	long cmn(int ,int);		//��������
	printf("������m,n:");
	scanf("%d%d",&m,&n);
	printf("m,n���������%ld\n",cmn(m,n)); 
}
long jc(int n)		//����׳˺���
{
	int i;
	long t;
	t = 1;
	for(i=1;i<=n;i++)
		t*=i;
	return (t);
 }
long cmn(int m,int n)		//��������Ϻ���
{
	return(jc(m)/(jc(n)*jc(m-n)));
 } 
