#include<stdio.h>
#include<string.h>
struct person
{
	char name[20];
	int count;
};
int main()
{
	struct person leader[3]={"fu", 0,"lu", 0,"shou", 0	},t;
	int i,j,k;
	int n=3,m;
	char name[20];
	printf("������ͶƱ������");
	scanf("%d",&m);
	printf("��������ҪͶƱ�˵�������\n");
	for(i=1;i<=m;i++)
	{
		printf("No.%d: ",i);
		scanf("%s",name);
		for(j=1;j<3;j++)
			if(strcmp(name,leader[j].name)==0)//�ж����ͶƱ�����Ǹ�˭��
				leader[j].count++; 
	}
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(leader[k].count<leader[j].count)
			 k=j;
	    if(k!=i) 
	    {
	    	t=leader[i];
	    	leader[i]=leader[k];
	    	leader[k]=t;
	    	
		}
	}
	printf("the vote of leader is:\n");
	for(i=0;i<n;i++)
		printf("%s %d\n",leader[i].name,leader[i].count);
}
