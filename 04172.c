//����һ�����֣������д��Сд�����֡��ո������ַ�������
#include<stdio.h>
int main()
{
	int i,j,k,l,m,n;
	char str[80];
	j = k = l = m = n = 0;
	gets(str);
	for(i=0;i<80&&str[i]!='\0';i++){
		if(str[i]>='a' && str[i]<='z')
			j+=1;
		else if(str[i]>='A' && str[i]<='Z')
			k+=1;
		else if(str[i]>='0'&& str[i]<='9')
			l+=1;
		else if(str[i]==' ')
			m+=1;
		else
			n+=1;
		}
	printf("Lower = %d\nUpper = %d\nNumber = %d\nSpace = %d\nOther = %d\n",j,k,l,m,n);
	return 0;
 }

