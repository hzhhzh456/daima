#include<stdio.h>
#define N 100
 
int fun(char *s)
{
	int i=0;
	while(*s!='\0')
	{
		i++;
		s++;
	}
	return i;
}
 
int main()
{
	
	int len;
	char s[N];
	printf("�������ַ���:");
	scanf("%s",s);
	len=fun(s);
	printf("�ַ�������:%d\n",len); 
	return 0;
}

