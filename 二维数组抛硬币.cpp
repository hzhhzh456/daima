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
	printf("投币结果如下：\n");
	printf("两个正面的次数为%d\n",a[0][0]);
	printf("两个反面的次数为%d\n",a[1][1]);
	printf("一正一反的次数为%d\n",a[0][1]+a[1][0]);
}
