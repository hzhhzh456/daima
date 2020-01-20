#include<stdio.h>
int main()
{
	int a[10]={9,1,11,8,2,3,4,7,9,10};
	int i;
	int j;
	int change=1;
	int t;
	for(i=0;i<10&&change==1;i++)
	{
		change=0;
		for(j=0;j<10-i-1;j++)
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			change=1;
			
		}
	}
	
	for(i=0;i<10;i++) printf("%5d",a[i]);
	printf("\n");
	 
	
 } 
