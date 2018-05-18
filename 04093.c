/*#include<stdio.h>
void cpystr(char *pfrom,char *pto)
{
	int i=0;
	while(pto[i]!='0')		//不能用pfrom,因为没有给pto所指向的数组赋结束标志\0 
	{
		*pto = *pfrom;
		pto++;
		pfrom++;
		i +=1;
	}
}
int main()
{
	char *pa="CHINA",b[10],*pb;
	pb = b;
	cpystr(pa,pb);
	printf("String a = %s\nString b = %s\n",pa,pb);
	return 0;
}*/
#include<stdio.h>
void cpystr(char *pfrom,char *pto)
{
	while(*pto++=*pfrom++); 
	/*//等效于
	while(*pto=*pfrom)
	{pto++;
	pfrom++;
	}*/
}
int main()
{
	char *pa="CHINA",b[10],*pb;
	pb = b;
	cpystr(pa,pb);
	printf("String a = %s\nString b = %s\n",pa,pb);
	return 0;
}
