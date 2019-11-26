#include<stdio.h>
long int fac(unsigned int n)
{
	long int f;
	if(n==0) return 1;
	f=fac(n-1)*n;
	return (f);
 } 
 int main()
 {
 	unsigned int n;
 	printf("input a unsigned interger number:\n");
 	scanf("%d",&n);
 	printf("%d!=%10ld",n,fac(n));
 }
