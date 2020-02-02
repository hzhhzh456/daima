#include<stdio.h>
int main()
{
     int a[9]={1,3,5,7,9,10,12,14};
     int b,i,j;
     scanf("%d",&b);
     
     for(i=0;i<8;i++){
          if(a[i]>=b){               /*找到插入位置*/
               for(j=8;j>i;j--)      /*后面元素均后移一位*/
                     a[j] = a[j-1]; 
               a[i] = b;             /*插入*/
               break; 
          }
     }
     if(i==8)                        /*若该数大于所有数*/
         a[8] = b; 

     for(i=0;i<9;i++)
         printf("%d ", a[i]); 
     printf("\n"); 
 
}
