#include<stdio.h>
int main()
{
	int a;
	printf("������һ����λ��: ");
	scanf("%d",&a);
	if(a<10000)
	{
		printf("�������");
	}
	else 
	{
		int i,j,k,l;
		i=a/10000;
		j=a/1000%10;
		k=a%100/10;
		l=a%10;
		if(i==l&&j==k)
		{
			printf("����Ϊ������");
		}
		else printf("������Ϊ������"); 
		
	}
}
