#include<stdio.h>
void a(int c)
{
	int b=0;
	b=c/3%2;
	if(c%3==0&&b==1)
	{
		printf("该数为3的幂次方");
	}
	else 
	{
		printf("该数不为3的幂次方");
	}
}
int main()
{
	int number;
	printf("请输入要判断的数: ");
	scanf("%d",&number);
	a(number);
	return 0;
 } 
