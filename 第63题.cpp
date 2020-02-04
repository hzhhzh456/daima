#include<stdio.h>
int main()
{
	char a[100];
	int i=0,c=0,j=0,m;
	printf("输入m：");
	scanf("%d",&m);
	printf("输入整数：");
	for (i=0;;i++)
	{
		scanf("%d",&a[i]);
		c++;
		if (getchar()=='\n')
			break;
	}
	for (i=c-1;i>=0;i--)
		a[i+m]=a[i];//所有元素后移m位
	for (i=c;i<c+m;i++)
		a[j++]=a[i];
	for (i=0;i<c+m;i++)
		printf("%3d",a[i]);
	putchar('\n');
}

