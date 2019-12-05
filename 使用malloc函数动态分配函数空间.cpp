#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *iIntMalloc=(int *)malloc(sizeof(int));
	*iIntMalloc=100;
	printf("%d\n",*iIntMalloc);
 } 
