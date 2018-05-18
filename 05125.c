#include "string.h" 
#include "stdio.h"
struct stu
{
	int num;
	char name[20];
	float score[3];
	float sum;
	float average;
};
void add(struct stu st)    //函数定义，结构体变量为形参
{
	int i;
	for(i = 0;i < 3;i++)
	{
		if(st.score[i] < 60)
			st.score[i] += 10;
	}
	st.sum = st.score[0] + st.score[1] + st.score[2];
	st.average = st.sum / 3;
	printf("NO.:%d\nName:%s\nScore:%.2f,%.2f,%.2f\nsum:%.2f\naverage:%.2f\n",st.num,st.name,st.score[0],st.score[1],st.score[2],st.sum,st.average);
 } 
void main()
{
	struct stu st;
	st.num = 200401;
	strcpy(st.name,"wanglin");
	st.score[0] = 60;
	st.score[1] = 90;
	st.score[2] = 50;
	add(st);
}
