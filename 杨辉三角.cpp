#include<stdio.h>
int main()
{
	int i,j,a[11][11];
	for(i=1;i<11;i++)
	{
		a[i][i]=1;//�Խ���Ԫ�ض�Ϊ1 
		a[i][1]=1;//ÿ�е�һ��Ԫ�ض�Ϊ1 
	}
	for(i=3;i<11;i++)//�ӵ����п�ʼ����ʮһ�� 
	
		for(j=2;j<=i-1;j++)//�ӵڶ��п�ʼ�����е�ǰһ�� 
		
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		
	
	for(i=1;i<11;i++)
	{
		for(j=1;j<=i;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	
	

 } 
