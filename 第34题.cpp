#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个不多于五位数的正整数");
	scanf("%d",&a);
		if(a/1000!=0)
		 	printf("该数为四位数"); 
		if (a/100!=0)
			printf("该数为三位数");
		if (a/10!=0)
			printf("该数为两位数");
		else 
			printf("该数为一位数");
		
	
}
