#include<stdio.h>
int main()
{
	int a,b,c,num=0;//aΪ1�ֵĸ�����bΪ2�ֵĸ�����cΪ5�ֵĸ�����
	for(a=0;a<=100;a++)
	{
		for(b=0;b<=50;b++)
		{
			for(c=0;c<=20;c++)
			{
				if(100==1*a+2*b+c*5)  {printf("1�ֵĸ���Ϊ��%d 2�ֵĸ���Ϊ��%d 5�ֵĸ���Ϊ��%d\n",a,b,c);
				num++;} 
			}
		}
	 } 
	 printf("�ܷ���Ϊ%d\n",num++);
	 return 0;
 } 
