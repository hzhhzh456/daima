#include<stdio.h>
int main()
{
	float a=100.0;
	int i;
	int sum=0;
	for(i=1;i<=10;i++)
	{
		sum=sum+a;
		a=a/2;
	}
	printf("������%d�ף���10�η���%f",sum,a);
 } 
