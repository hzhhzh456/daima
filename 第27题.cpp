#include<stdio.h>
int main()
{
	char i,j,k;
	for(i='X';i<='Z';i++)
	for(j='X';j<='Z';j++)
	for(k='X';k<='Z';k++)
	if(i!=j&&i!=k&&j!=k)
	{
		if(i!='X'&&k!='X'&&k!='Z')
		printf("����ѡ�ֵı�������Ϊ: \nA VS %c  B VS %c  C VS %c\n",i,j,k); 
	}
	
}
