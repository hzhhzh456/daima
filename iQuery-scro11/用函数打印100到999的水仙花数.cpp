#include<stdio.h>
#include<math.h>
void a(int i)
{
	if(i<100||i>=1000) return;
	int x,y,z;
	x=i%10;
	y=i/10%10;
	z=i/100;
    if(i==pow(x,3)+pow(y,3)+pow(z,3)) printf("%d\n",i);
    a(i+1);
} 
 int main()
 {
 	a(100);
 }
