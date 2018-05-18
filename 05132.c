#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#define N 100
struct employee
{
	int num;
	char name[20];
	char sex;
	int age;
	char xueli[30];
	int wage;
	char addr[30];
	long int tel;
}em[N];    /*定义一个结构体*/
void main()
{
	menu();    //调用菜单 
	int n,flag;
	char a;
	do
	{
		printf("请输入你需要操作的步骤(1--7):\n");
		scanf("%d",&n);
		if(n >= 1 && n <= 7)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
			printf("您的输入有误，请重新选择!");
		 } 
	}while(flag == 0);
	while(flag == 1)
	{
		switch(n)
		{
			case 1 : printf(" ◆◆◆输入职工信息◆◆◆\n");
					 printf("\n");
					 input();    //调用input函数 
					 break;
			case 2 : printf("◆◆◆浏览职工信息◆◆◆\n");
					 printf("\n");
					 display();
					 break;
			case 3 : printf("◆◆◆按职工号查询职工信息◆◆◆\n");
					 printf("\n");
					 search();
					 break;
			case 4 : printf("◆◆◆删除职工信息◆◆◆\n");
					 printf("\n");
					 del();
					 break;
			case 5 : printf("◆◆◆添加职工信息◆◆◆\n");
					 printf("\n");
					 add();
					 break;
			case 6 : printf("◆◆◆修改职工信息◆◆◆\n");
					 printf("\n");
					 modify();
					 break;
			case 7 : exit(0);
					 break;
			default : break; 
		}
		getchar();
		printf("\n");
		printf("是否继续进行？(y or n): \n");
		scanf("%c",&a);
		if(a == 'y')
		{
			flag = 1;
			system("cls");
			menu();
			printf("请再次选择你需要操作的步骤(1--6): \n");
			scanf("%d",&n);
			printf("\n");
		}
		else
			exit(0);
	}
}
void add()    /*信息添加函数*/ 
{
	FILE *fp;
	int n;
	int count = 0;
	int i;
	int m = load();
	printf("\n原来的职工信息:\n");
	display();    /*调用浏览函数*/
	printf("\n");
	fp = fopen("employee_list","a");
	printf("请输入想增加的职工数：\n");
	scanf("%d",&n);
	for(i = m;i < (m+n);i++)
	{
		printf("\n请输入新增加的职工的信息:\n");
		printf("请输入职工号:   ");
		srand((int)time(0));
		em[i].num = rand()%10000 + 20000000;
		if(em[i].num != em[i-1].num)
			printf("%8d",em[i].num);
		printf("\n");
		printf("请输入姓名:   ");
		scanf("%s",&em[i].name);
		getchar();
		printf("请输入性别(f - 女  m - 男):   ");
		scanf("%c",&em[i].sex);
		printf("请输入年龄:   ")
		scanf("%d",&em[i].age);
		printf("请输入学历:   ");
		scanf("%s",em[i].xueli);
		printf("请输入工资:   ");
		scanf("%d",em[i].wage);
		printf("请输入地址:   ");
		scanf("%s",em[i].addr);
		printf("请输入电话:   ");
		scanf("%d",em[i].tel);
		printf("\n");
		count = count + 1;
		printf("已增加的人数:\n");
		printf("%d\n",count); 
	}
	printf("添加完毕!\n");
	m = m + count;
	printf("浏览增加后的所有职工信息:\n");
	printf("\n");
	save(m);
	display();
	fclose(fp);
}
void search()
{
	int t,flag;
	do
	{
		printf("\n按职工号查询请按1；按学历查询请按2；按电话号码查询请按3；进入主函数请按4;\n");
		scanf("%d",&t);
		if(t >= 1 && t <= 4)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
			printf("您的输入有误，请重新选择!");
		} 
	}while(flag == 0)
	while(flag == 1)
	{
		switch(t)
		{
			case 1 : printf("按职工号查询\n");
					 search_num();
					 break;
			case 2 : printf("按学历查询\n");
					 search_xueli();
					 break;
			case 3 : printf("按电话号码查询\n");
					 search_tel();
					 break;
			case 4 : main();
					 break;
			default: break;
		}
	}
}
void del()    /*删除信息函数*/
{
	int m = load();
	int i,j,n,t,flag;
	char name[20];
	printf("\n原来职工的信息: \n");
	display();    /*调用浏览函数*/
	printf("\n");
	printf("请输入要删除的职工的姓名: \n");
	scanf("%s",name);
	for(flag = 1,i = 0;flag && i < m;i++)
	{
		if(strcmp(em[i].name,name) == 0)
		{
			printf("\n已找到此人，原始记录为: \n");
			printf("")
		}
	}
}	
