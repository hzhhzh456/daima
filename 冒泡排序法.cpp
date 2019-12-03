#include<stdio.h>
int main()
{
	int i=0;
	int j=0,t=0;
	int change=1;
	int d[10]={48,62,35,77,55,14,35,98,22,40};
	for(i=0;i<10&&change==1;i++)
	{
		change=0;
		for(j=0;j<10-i-1;j++)
		if(d[j]>d[j+1])
		{
			t=d[j];
			d[j]=d[j+1];
			d[j+1]=t;
			change=1;
			
		}
		
	}
	printf("The sorted resuluts: \n");
	for(i=0;i<10;i++) printf("%5d",d[i]);
	printf("\n");
 } 
