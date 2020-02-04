#include<stdio.h>
int find()
{
	int b=0;
	int a[9]={1,2,1,4,5,2,6,4,6};
	for(int i=0;i<9;i++)
	{
		for(int j=i+1;j<9;j++)
		{
			b=a[i]^a[j];
			if((a[i]!=0||a[j]!=0)&&b==0)
			{
				a[i]=0;
				a[j]=0;
				break;
			}
		}
	}
	for (int i=0;i<9;i++)
	{
		if(a[i]!=0)
		{
			return a[i];
		}
	}
}
int main()
{
	int a=find();
	printf("%d",a);
}
