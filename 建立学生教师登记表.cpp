#include<stdio.h>
#include<string.h> 
# define N 5
struct type
{
	int id;
	char name[30];
	char job[10];
	union
	{
		int grade;
		char postion[10];
	}level;
 } person[N];
int main()
{
	int n,i;
	printf("\nPersonal Information (ID����������ݣ��꼶��ְ��):\n");
	for(i=0;i<N;i++)
	{
		scanf("%d%s%s",&person[i].id,person[i].name,person[i].job);
		if(strcmp(person[i].job,"student")==0)
			scanf("%d",&person[i].level.grade);
		else if(strcmp(person[i].job,"teacher")==0)
			scanf("%d",&person[i].level.postion);
		else printf("�������\n");
	}
	printf("IDnamejobgrade /postion \n");
	for(i=0;i<N;i++)
	{
		if(strcmp(person[i].job,"student")==0)//�ж��Ƿ�Ϊѧ��
			printf("%-5d%-10s%-15s%-15s\n",person[i].id,person[i].name,person[i].job,person[i].level.grade);
		else printf("%-5d%-10s%-15s%-15s\n",person[i].id,person[i].name,person[i].job,person[i].level.postion);
	}
}
