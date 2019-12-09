#include<stdio.h>
int main()
{
	int i,j;
	double c;
	double sum;
	sum=0;
	for(i=1;i<=100;i++)
	{
		c=1;
		for(j=1;j<=i;j++)
		 c*=j;
		 sum+=c;
	}
		printf("1!+2!+3!+...+100!=%lld",sum);
		
    
}    
