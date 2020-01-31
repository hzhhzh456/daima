#include<stdio.h>
int main()
{
	int a,b,c;
	printf("请输入三个数:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c&&b>c)
	{
		printf("%d>%d>%d",a,b,c);
	}
	if(a>b&&a>c&&c>b)
	{
		printf("%d>%d>%d",a,c,b);
	}
	if(b>a&&a>c&&b>c)
	{
		printf("%d>%d>%d",b,a,c);
	}
	if(b>a&&c>a&&b>c)
	{
		printf("%d>%d>%d",b,c,a);
	}
	if(c>a&&c>b&&b>a)
	{
		printf("%d>%d>%d",c,b,a);
	}
	if(c>a&&c>b&&a>b)
	{
		printf("%d>%d>%d",c,b,a);
	}
}
