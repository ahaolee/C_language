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
}em[N];    /*����һ���ṹ��*/
void main()
{
	menu();    //���ò˵� 
	int n,flag;
	char a;
	do
	{
		printf("����������Ҫ�����Ĳ���(1--7):\n");
		scanf("%d",&n);
		if(n >= 1 && n <= 7)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
			printf("������������������ѡ��!");
		 } 
	}while(flag == 0);
	while(flag == 1)
	{
		switch(n)
		{
			case 1 : printf(" ����������ְ����Ϣ������\n");
					 printf("\n");
					 input();    //����input���� 
					 break;
			case 2 : printf("���������ְ����Ϣ������\n");
					 printf("\n");
					 display();
					 break;
			case 3 : printf("��������ְ���Ų�ѯְ����Ϣ������\n");
					 printf("\n");
					 search();
					 break;
			case 4 : printf("������ɾ��ְ����Ϣ������\n");
					 printf("\n");
					 del();
					 break;
			case 5 : printf("���������ְ����Ϣ������\n");
					 printf("\n");
					 add();
					 break;
			case 6 : printf("�������޸�ְ����Ϣ������\n");
					 printf("\n");
					 modify();
					 break;
			case 7 : exit(0);
					 break;
			default : break; 
		}
		getchar();
		printf("\n");
		printf("�Ƿ�������У�(y or n): \n");
		scanf("%c",&a);
		if(a == 'y')
		{
			flag = 1;
			system("cls");
			menu();
			printf("���ٴ�ѡ������Ҫ�����Ĳ���(1--6): \n");
			scanf("%d",&n);
			printf("\n");
		}
		else
			exit(0);
	}
}
void add()    /*��Ϣ��Ӻ���*/ 
{
	FILE *fp;
	int n;
	int count = 0;
	int i;
	int m = load();
	printf("\nԭ����ְ����Ϣ:\n");
	display();    /*�����������*/
	printf("\n");
	fp = fopen("employee_list","a");
	printf("�����������ӵ�ְ������\n");
	scanf("%d",&n);
	for(i = m;i < (m+n);i++)
	{
		printf("\n�����������ӵ�ְ������Ϣ:\n");
		printf("������ְ����:   ");
		srand((int)time(0));
		em[i].num = rand()%10000 + 20000000;
		if(em[i].num != em[i-1].num)
			printf("%8d",em[i].num);
		printf("\n");
		printf("����������:   ");
		scanf("%s",&em[i].name);
		getchar();
		printf("�������Ա�(f - Ů  m - ��):   ");
		scanf("%c",&em[i].sex);
		printf("����������:   ")
		scanf("%d",&em[i].age);
		printf("������ѧ��:   ");
		scanf("%s",em[i].xueli);
		printf("�����빤��:   ");
		scanf("%d",em[i].wage);
		printf("�������ַ:   ");
		scanf("%s",em[i].addr);
		printf("������绰:   ");
		scanf("%d",em[i].tel);
		printf("\n");
		count = count + 1;
		printf("�����ӵ�����:\n");
		printf("%d\n",count); 
	}
	printf("������!\n");
	m = m + count;
	printf("������Ӻ������ְ����Ϣ:\n");
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
		printf("\n��ְ���Ų�ѯ�밴1����ѧ����ѯ�밴2�����绰�����ѯ�밴3�������������밴4;\n");
		scanf("%d",&t);
		if(t >= 1 && t <= 4)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
			printf("������������������ѡ��!");
		} 
	}while(flag == 0)
	while(flag == 1)
	{
		switch(t)
		{
			case 1 : printf("��ְ���Ų�ѯ\n");
					 search_num();
					 break;
			case 2 : printf("��ѧ����ѯ\n");
					 search_xueli();
					 break;
			case 3 : printf("���绰�����ѯ\n");
					 search_tel();
					 break;
			case 4 : main();
					 break;
			default: break;
		}
	}
}
void del()    /*ɾ����Ϣ����*/
{
	int m = load();
	int i,j,n,t,flag;
	char name[20];
	printf("\nԭ��ְ������Ϣ: \n");
	display();    /*�����������*/
	printf("\n");
	printf("������Ҫɾ����ְ��������: \n");
	scanf("%s",name);
	for(flag = 1,i = 0;flag && i < m;i++)
	{
		if(strcmp(em[i].name,name) == 0)
		{
			printf("\n���ҵ����ˣ�ԭʼ��¼Ϊ: \n");
			printf("")
		}
	}
}	
