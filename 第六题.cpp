#include<stdio.h> 
int main()
{
	int a1=1;
	int a2=1;
	int i;
	for(i=0;i<10;i++)
	{
		printf(" %d %d",a1,a2);
		a1=a1+a2;
		a2=a1+a2;
	}
}
