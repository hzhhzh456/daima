#include<stdio.h>
int main()
{
	int n=0,i=0,j=0,m=0;
	int sum=0;
	int reg=0;
	printf("请输入一个数：");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		m=0;
		for(m=1;m<=i;m++){
			sum+=m;
		}
		reg+=sum;
		
	}
	printf("%d",reg);
	 
 } 
