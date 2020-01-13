#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	int member=0;
	int number=0;
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=4;b++)
		{
			for(c=1;c<=4;c++)
			{
				if((a!=b)&&(a!=c)&&(b!=c))
				{
					member=a*100+b*10+c;
					printf("%10d",member);
					number=number+1;
				}
			}
		}
	}
	printf("¹²ÓĞ%dÖÖ",number);
	return 0;
 } 
