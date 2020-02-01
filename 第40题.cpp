#include<stdio.h>
int main()
{
	int n;
	printf("请输入非负整数n的值");
	scanf("%d",&n);
	int i,j;
	for(i=2;i<n;i++)
	{
		int m=1; 
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				m=0;
				break;
			}
		}
	if(m==1)
	{
		printf("%d是质数\n",i);
	}
	}
 } 
