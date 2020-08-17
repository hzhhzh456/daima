#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n",&n);
	int a[n];
	int i;
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
		if(i>=1)
		{
			printf(" ");
		}
	}
 } 
