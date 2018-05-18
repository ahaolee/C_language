#include<stdio.h>
struct student
{
	int no;
	char name[20];
	char sex;
	int score[3];
	int sum;
	float average;
};
main()
{
	struct student stu1 = {2014,"wanghui",'M',78,75,76};
	//  78,75,76依次赋给stu1的score数组,此时sum,average值为空 
	struct student *p;
	p = &stu1;
	stu1.sum = stu1.score[0] + stu1.score[1] + stu1.score[2];
	stu1.average = stu1.sum / 3;
	printf("%d,%s,%c,%d,%d,%d,%d,%2f\n",stu1.no,stu1.name,stu1.sex,stu1.score[0],stu1.score[1],stu1.score[2],stu1.sum,stu1.average);
	printf("%d,%s,%c,%d,%d,%d,%d,%2f\n",(*p).no,(*p).name,(*p).sex,(*p).score[0],(*p).score[1],(*p).score[2],(*p).sum,(*p).average);
	printf("%d,%s,%c,%d,%d,%d,%d,%2f\n",p->no,p->name,p->sex,p->score[0],p->score[1],p->score[2],p->sum,p->average); 
}
