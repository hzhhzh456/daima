#include<stdio.h> 
void a(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			printf(" %d",i);
			n=n/i;
		}
	}
}
int main()
{
	int i,n;
	printf("������һ������");
	scanf("%d",&n);
	a(n);
	return 0;
}
