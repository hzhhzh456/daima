#include<stdio.h>
int main()
{
	int a,b,c,num=0;//a为1分的个数，b为2分的个数，c为5分的个数。
	for(a=0;a<=100;a++)
	{
		for(b=0;b<=50;b++)
		{
			for(c=0;c<=20;c++)
			{
				if(100==1*a+2*b+c*5)  {printf("1分的个数为：%d 2分的个数为：%d 5分的个数为：%d\n",a,b,c);
				num++;} 
			}
		}
	 } 
	 printf("总方法为%d\n",num++);
	 return 0;
 } 
