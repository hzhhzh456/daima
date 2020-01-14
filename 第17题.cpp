#include<stdio.h>
int main()
{
	int chengji;
	char dengji;
	printf("请输入得分");
	scanf("%d",&chengji);
	dengji=chengji>=90?'A':(chengji>=60?'B':'C');
	printf("%d分是%c等级",chengji,dengji);
 } 
