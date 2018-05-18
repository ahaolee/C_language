//输入字符串，求其长度 
#include<stdio.h>
#include<string.h>
int main(){
	char str[21];
	int strLen;
	scanf("%s",str);
	strLen = strlen(str);
	printf("length = %d\n",strLen);
	return 0;
}
