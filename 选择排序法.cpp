#include<stdio.h>
void SelectionSort(int *num,int n)
{
	int i=0;
	int min=0;
	int j=0;
	int tmp=0;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(num[j] < num[min] )
			{
				min=j;
			}
			
		}
		if(min!=i)
			{
				tmp = num[min];
				num[min] = num[i];
				num[i] = tmp;
			}
	}
	
}
int main()
{
	int num[5]={5,8,2,0,1};
	int i=0;
	SelectionSort(num,5); 
	for(i=0;i<5;i++)
	{
		printf(" %d",num[i]);
		
	}
	return 0;
}
