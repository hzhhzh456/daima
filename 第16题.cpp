#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个数字: ");
	scanf("%d",&a);
	printf("%d=",a);
	for(int i=2;i<a;i++)
	{
		while(a!=i)
		{
			if(a%i==0)
			{
				printf("%d*",i);
				a=a/i;
			}	
			else
			{
				break;
			}
		}
	}
	printf("%d",a);
}
