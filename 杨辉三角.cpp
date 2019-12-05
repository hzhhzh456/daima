#include<stdio.h>
int main()
{
	int i,j,a[11][11];
	for(i=1;i<11;i++)
	{
		a[i][i]=1;//对角线元素都为1 
		a[i][1]=1;//每行第一列元素都为1 
	}
	for(i=3;i<11;i++)//从第三行开始到第十一行 
	
		for(j=2;j<=i-1;j++)//从第二列开始到该列的前一列 
		
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		
	
	for(i=1;i<11;i++)
	{
		for(j=1;j<=i;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	
	

 } 
