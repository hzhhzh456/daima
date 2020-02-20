#include<stdio.h>
int main()
{
	int a[101],i,j,t,n;
	for(i=0;i<=100;i++)
	{
		a[i]=0;
	}
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&t);
		a[t]++;
		
	}
	for(i=100;i>=0;i--)
	{
		for(j=1;j<=a[i];j++)
		{
			printf("%d ",i);
		}
	}
	
	getchar();getchar();
	return 0; 
 } 
