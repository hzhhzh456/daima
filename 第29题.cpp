#include<stdio.h>
int main()
{
	int i=1;
	int j=1;
	int c;
	long sum=0;
	for(i;i<=20;i++)
	{
		c=1;
		for(j;j<=20;j++)
		{
			c=c*j;
			sum=sum+c;
		}
	}
	printf("%ld",sum);
 } 
