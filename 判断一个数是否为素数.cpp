#include<stdio.h>
int main()
{
	int m,n,i;
	printf("请输入一个数：",m);
	scanf("%d",&m);
	i=1;
	for(n=2;n<m;n++)
	if(m%n==0){
		i=0;
		break;
	}
	if(i==0) printf("%d不是素数",m);
	else printf("%d是素数",m);
 } 
