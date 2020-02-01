#include<stdio.h>
int add(int n)
{
	
	float sum=0;
	if(n%2==0)
	{
		for(int i=0;i<n;i+2)
		{
			sum=sum+1/(2+i);
		}
	}
	else
	{
		for(int i=1;i<n;i+2)
		{
			sum=sum+1/(i);
		}
	}
	printf("%f",sum);
}
int main()
{
	int n;
	printf("ÇëÊäÈënµÄÖµ"); 
	scanf("%d",&n);
	add(n);
	
}
