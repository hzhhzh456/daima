#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=101;i<=200;i++)
	{
		int m=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				m=0;
				break;
			}
		}
		if(m==1)
		{
			printf("%dÊÇËØÊý\n",i);
		}
	}
	
}
