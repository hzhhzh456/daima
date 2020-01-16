#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入两个数字:");
	scanf("%d %d",&a,&b);
	int c;
	c=b;
	b=a;
	a=c;
	printf("a=%d,b=%d",a,b);
}
 
