#include<stdio.h>
int main()
{
	int m=1000;
	
	for(int i=2;i<1000;i++)
	{
		int s=0;
		for(int n=1;n<i;n++)
		{
			if(i%n==0)
			{
				s+=n;
				if(s==i)
				{
					printf("%d\n",i);
				}
			}
		}
	 } 
}
