#include <stdio.h> 
int main() 
{ 
	int i,a,n; 
	long sum=0; 
	long h=0; 
	printf("����������a��λ��n:\n"); 
	scanf("%d %d",&a,&n); 
	h=a;
	for(i=1;i<=n;i++) 
	{ 
		sum=sum+h;
		h=h*10+h;
	} 
	 
	
	printf("�ܺ�Ϊ��%ld\n",sum); 
}
