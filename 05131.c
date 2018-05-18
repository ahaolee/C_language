#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void main()
{
	enum week{SUN,MON,TUE,WED,THR,FRI,SAT};
	enum week day;
	int total = 0,pay,hour,i;
	char weeks[][4]={"SUN","MON","TUE","WED","THR","FRI","SAT"};    //三个字符加一个结束标记'\0' 
	for(day = SUN,i = 0;day <= SAT;day++,i++)
	{
		printf("Please enter your working hours on %s:",weeks[i]);
		scanf("%d",&hour);
		switch(day)
		{
			case SUN : pay = hour * 120;break;
			case SAT : pay = hour * 100;break;
			default  : pay = hour * 80;break; //from MON to FRI
		}
		total += pay;
	}
	printf("Your total pay is : %d\n",total);
}
