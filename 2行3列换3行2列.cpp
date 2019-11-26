#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	int C[2][3];
	int D[3][2];
	printf("Input matix C[2][3]: \n");
	for(i=0;i<2;i++)
	for(j=0;j<3;j++) scanf("%d",&C[i][j]);
	printf("C[2][3]: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%3d ",C[i][j]);
			D[j][i]=C[i][j];
		}
		printf("\n ");
	}
	printf("matix D[3][2]: \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=1;j++) printf("%3d", D[i][j]);
		printf("\n");
	}
 } 
