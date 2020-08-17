#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        if(i<n-1)
        {
            scanf(" ");
        }
            
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
        if(i>=1)
        {
           printf(" ");
        }
    }
    return 0;
}
