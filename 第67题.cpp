#include<stdio.h>
#include<stdlib.h>
struct node 
{
	char name[20];
	int number;
	struct node *next; 
};
int icount;
struct node *Creat()
{
	struct student *phead=NULL;
	struct student *pend,*pnew;
	icount=0;
	pend=pnew=(struct node *)malloc(sizeof (struct node));
	scanf("%s",pnew->name);
	scanf("%d",&pnew->number);
	while(pnew->number!=0)
	{
		icount++;
		if(icount==1)
		{
			pnew->next=phead;
			pnew=pend;
			phead=pnew;
		}
		else
		{
			pnew->next=NULL;
			pend->next=pnew;
			pend=pnew;
		}	
		pnew=(struct node *)malloc(sizeof(struct node));
		scanf("%s",pnew->name);
		scanf("%d",&pnew->number);
	}
	free(pnew);
	return phead;
	
}
