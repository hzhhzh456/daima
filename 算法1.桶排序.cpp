#include<stdio.h>
int main()
{
	int a[11],i,j,t;
	for (i=0;i<=10;i++)
	{
		a[i]=0;//������Ԫ�س�ʼ��Ϊ0 
	}
	for(i=1;i<=5;i++)//ѭ������5���� 
	{
		scanf("%d",&t);//��ÿһ�����������t 
		a[t]++;//���� 
	}
	for(i=0;i<=10;i++)
	{
		for(j=1;j<=a[i];j++)//���ּ��ξʹ�ӡ���� 
		{
			printf("%d ",i);
		}
	}
	getchar();getchar(); 
	return 0; 
	
 } 
