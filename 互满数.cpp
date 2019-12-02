#include<stdio.h>
int m(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	  if(n%i==0)                                                                              
		sum=sum+i; 
		return(sum);
 } 
int main()
{
	int i,j,a,b;
	for(i=1;i<10000;i++)
	{
		a=m(i);
		b=m(a);
		if(i==b&&i<a)
			printf("%d %d\n",a,b);
	}
}
