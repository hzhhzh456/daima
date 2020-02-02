#include <stdio.h>
int main()
{
    int i,n,t,j;
    scanf("%d",&n);
    int nums[n];
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(nums[i]+nums[j]==t){
                printf("%d,%d",i,j);
            }
        }
    }
    return 0;
}
