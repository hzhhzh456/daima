#include<stdio.h>
int main()
{
	int a[3][3]={{2,3,1},{3,5,9},{1,3,5}};
	int sum=0;
	sum=a[0][1]+a[1][2]+a[2][3];
	printf("sum=%d",sum);
}
