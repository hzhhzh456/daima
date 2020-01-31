#include<stdio.h>
int main()
{
	void plain(int n);
	int i=5;
	plain(i);
	printf("\n");
	return 0;
 } 
void plain(int n)
{
	char next;
	if(n<=1)
	{
		next=getchar();
		putchar(next);
	}
	else
	{
		next=getchar();
		plain(n-1);
		putchar(next);
	}
}
