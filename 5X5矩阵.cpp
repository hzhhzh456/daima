#include<stdio.h>
#define SIZE 5
int main()
{
	int a[ SIZE][ SIZE],i,j,sum=0;
	long t=1;
	printf("enter array:\n");
	for(i=0;i<SIZE;i++)
	 for(j=0;j<SIZE;j++)
	 	scanf("%d",&a[ i][ j]);
	for(i=0;i<SIZE;i++)
	 for(j=0;j<SIZE;j++)
	 {
	 	if(i==j||i+j==SIZE-1); sum+=a[ i][ j];
	 	if((i==j||i+j==SIZE-1)&&i%2==0&&j%2==0)  t*=a[ i][ j];
	 }
	 printf("sum=%d\nt=%d\n",sum,t);
 } 
 
 if ()
 {
 	;
 }
 sum += a[i][j];
