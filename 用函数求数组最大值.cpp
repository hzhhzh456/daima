#include<stdio.h>
float max(float x,float y)
{if(x>y) return y;
 else return x;
}
int main()
{float m,a[10]={12.3,105,34.5,50,67,9,78,98,89,-20};
 int k;
 m=a[0];
 for(k=1;k<=9;k++)
 	m=max(a[k],m);
 	printf("%.2f\n",m); 
}
