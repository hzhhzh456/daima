#include<stdio.h>
int main()
{
	int n;
	printf("������Ǹ�����n��ֵ");
	scanf("%d",&n);
	int i,j;
	for(i=2;i<n;i++)
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
		printf("%d������\n",i);
	}
	}
 } 
