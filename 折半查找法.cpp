#include<stdio.h>
int main()
{
	int a[10];
	int i,j,number,low,high,mid,loca;
	int flag=1,sign=1;
	printf("enter :\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("input:");
	scanf("%d",&number);
	while(flag==1)
	{
		loca=1;
		low=0;
		high=10-1;
		sign=1;
		if(number<a[0]||number>a[10-1])
			loca=-1;
		while((sign==1)&&(low<=high))
		{
			mid=(low+high)/2;
			if(number==a[mid])
			{
				loca=mid;
				printf("find %d,%d\n",number,loca+1);
				sign=0;
				flag=0;
			}
		else if(number<a[mid]) high=mid-1;
			else low=mid+1;
		}
		if(sign==1||loca==-1)
		{
			printf("not founf\n");
			flag=0;
		}
	  } 
}
