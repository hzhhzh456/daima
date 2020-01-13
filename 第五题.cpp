#include<stdio.h>
int main()
{
	int x,y,z;
	printf("请输入三位数：");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y&&x>z&&y>z)
		printf("%d,%d,%d",z,y,x);
	if(x>y&&x>z&&y<z)
		printf("%d,%d,%d",y,z,x);
	if(y>x&&x>z&&y>z)
		printf("%d,%d,%d",z,x,y);
	if(y>x&&x<z&&y>z)
		printf("%d,%d,%d",x,z,y);
	if(z>x&&z>y&&x>y)
		printf("%d,%d,%d",y,x,z);
	if(z>x&&z>y&&x<y)
		printf("%d,%d,%d",x,y,z);
 } 
