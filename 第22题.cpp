#include <stdio.h> 
int main() 
{ 
	int i,a,n; 
	long sum=0; 
	long h=0; 
	printf("请输入数字a和位数n:\n"); 
	scanf("%d %d",&a,&n); 
	h=a;
	for(i=1;i<=n;i++) 
	{ 
		sum=sum+h;
		h=h*10+h;
	} 
	 
	
	printf("总和为：%ld\n",sum); 
}
