#include<stdio.h>
int main()
{
	int m,n,i;
	printf("������һ������",m);
	scanf("%d",&m);
	i=1;
	for(n=2;n<m;n++)
	if(m%n==0){
		i=0;
		break;
	}
	if(i==0) printf("%d��������",m);
	else printf("%d������",m);
 } 
