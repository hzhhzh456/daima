#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[2][2],i,n1,n2;
	a[0][0]=a[1][1]=a[0][1]=a[1][0]=0;
	for(i=1;i<=100;i++)
	{
		n1=rand()%2;
		n2=rand()%2;
		a[n1][n2]=a[n1][n2]+1;
	}
	printf("Ͷ�ҽ�����£�\n");
	printf("��������Ĵ���Ϊ%d\n",a[0][0]);
	printf("��������Ĵ���Ϊ%d\n",a[1][1]);
	printf("һ��һ���Ĵ���Ϊ%d\n",a[0][1]+a[1][0]);
}
