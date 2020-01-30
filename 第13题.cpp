#include<stdio.h>
int main()
{
	int a=1;
	int b=1;
	printf("%d\n",a);
	printf("%d\n",b);
	for(int i=0;i<10;i++)
	{
		a=a+b;
		printf("%d\n",a);
		b=b+a;
		printf("%d\n",b);
	}
 } 
