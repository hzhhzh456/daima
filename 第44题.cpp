#include<stdio.h>
#define N 5 
int main() 
{ 
    int a[N]={9,6,5,4,1},i,temp;
    printf("\n����ǰΪ\n");
    for(i=0;i <N;i++)
        printf("%4d",a[i]); 
     
    for(i=0;i<N/2;i++)
    {
        temp=a[i];
        a[i]=a[N-i-1];
        a[N-i-1]=temp; 
    } 
 
    printf("\n �����Ϊ\n"); 
    for(i=0;i <N; i++)
        printf("%4d",a[i]); 
 
    printf("\n");
    return 0;
}
