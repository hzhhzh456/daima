#include<stdio.h>
int main()
{
	int i,a;
	for(i=1;i<=4;i++)
	{
		a=2*i-1;
		for(int m=1;m<=4-i;m++)
		{
			printf(" ");
		 } 
	    for(int j=0;j<a;j++)
	    {
	    	printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
		a=a-2;
		for(int s=1;s<=i;s++)
		{
			printf(" ");
		}
		for(int k=0;k<a;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
 } 
