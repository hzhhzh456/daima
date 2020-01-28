#include<stdio.h>
int main()
{
	int number=0;
	int x,y,z;
	int a;
	for(x=0;x<=100;x++)
	{
		for(y=0;y<=50;y++)
		{
			for(z=0;z<=20;z++)
			{
				a=x+2*y+5*z;
				if(a==100)
					printf("1为%d,2为%d,5为%d\n",x,y,z);
					number++;
			}
		}
	}
	printf("共有%d种",number);
 } 
