#include<stdio.h>
int main()
{
	char c;
	int letter,space,number,other;
	letter=space=number=other=0;
	while((c=getchar())!='\n')
	{
		if(c>='a'&&c<='z'||c>='A'&&c<='Z')
		{
			letter++;
		}
		else if(c>='0'&&c<='9')
		{
			number++;
		}
		else if(c==' ')
		{
			space++;
		}
		else
			other++;
	}
	printf("%d\n%d\n%d\n%d",letter,number,space,other);
 } 
