#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个五位数: ");
	scanf("%d",&a);
	if(a<10000)
	{
		printf("输入错误");
	}
	else 
	{
		int i,j,k,l;
		i=a/10000;
		j=a/1000%10;
		k=a%100/10;
		l=a%10;
		if(i==l&&j==k)
		{
			printf("该数为回文数");
		}
		else printf("该数不为回文数"); 
		
	}
}
