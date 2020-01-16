#include<stdio.h>
int main()
{
	float sum=0.0;
	float a=1,b=2;
	float c,e;
	for(int i=1;i<=20;i++)
	{
		e=b/a;
		sum=sum+e;
		c=b;
		b=a+b;
		a=c;
	}
	printf("%f",sum);
 } 
