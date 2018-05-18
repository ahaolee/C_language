#include<stdio.h>
void sub(char *a,int t1,int t2)    //指针变量a指向s[0]  t1=7,t2=11
{
	char ch;
	while(t1<t2)   //while(7<11)
	{
		ch = *(a + t1);
		*(a + t1) = *(a + t2);
		*(a + t2) = ch;    //s[7]和s[11]值互换 s[8]和s[10]值互换
		t1++;    //t1 =8 
		t2--;    //t2 =10     
	}
}
int main()
{
	char s[12];
	int i;
	for(i = 0;i < 12;i++)
		s[i] = 'A' + i + 32;    //s[0]=65+0+32=97='a'.......s[11]=65+11+32=108='l'
	sub(s,7,11);
	for(i = 0;i < 12;i++)
		printf("%c",s[i]);
	printf("\n");
	return 0;
}
