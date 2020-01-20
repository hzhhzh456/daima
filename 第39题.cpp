#include<stdio.h>
int main()
{
	int i,a,target;
	
	for(i=2;i<=100;i++)
	{
		target=1;
		for(a=2;a<i;a++)
		{
			if(i%a==0)
			{
				target=0;
				break;
			}
		}
		if(target==1)
		{
			printf("%d ",i);
		}
	}
}
