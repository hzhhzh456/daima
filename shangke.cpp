#include<stdio.h>
void jiaohuan(int a[],int left,int right);
void nixu(int a[],int n,int p);
int main()
{
    int arr[100],m,n;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    nixu(arr,n,m);
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("%d",arr[n-1]);

    return 0;
}
void nixu(int arr[],int n,int m)
{
    if(m>0&&m<n)
    {
        jiaohuan(arr,0,n-1);
        jiaohuan(arr,0,n-m-1);
        jiaohuan(arr,n-m,n-1);
    }
}
void jiaohuan(int arr[],int left,int right)
{
	int i = left,j = right,temp;
	
	while(i < j)
	{
		temp = arr[i];	
		arr[i] = arr[j];	
		arr[j] = temp;
		i++;
		j--; 
	}
 }

