#include<stdio.h>
void a(int c)
{
	int b=0;
	b=c/3%2;
	if(c%3==0&&b==1)
	{
		printf("����Ϊ3���ݴη�");
	}
	else 
	{
		printf("������Ϊ3���ݴη�");
	}
}
int main()
{
	int number;
	printf("������Ҫ�жϵ���: ");
	scanf("%d",&number);
	a(number);
	return 0;
 } 
