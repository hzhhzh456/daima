#include<stdio.h>
int main()
{
	int i=1;
	while (!((i%2==1)&&(i%3==2)&&(i%5==4)&&(i%6==5)&&(i%7==0)))
	++i;
	printf("Â¥ÌÝµÄ½×ÊýÎª£º %d",i);
	
 } 
