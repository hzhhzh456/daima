#include<stdio.h>
int main()
{
	int chengji;
	char dengji;
	printf("������÷�");
	scanf("%d",&chengji);
	dengji=chengji>=90?'A':(chengji>=60?'B':'C');
	printf("%d����%c�ȼ�",chengji,dengji);
 } 
