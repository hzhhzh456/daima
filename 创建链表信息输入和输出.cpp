#include<stdio.h>
#include<stdlib.h> 
struct Student
{
	char cName[20];
	int iNumber;
	struct Student *next;
};
int iCount;
struct Student *Create()
{
	struct Student *pHead=NULL;
	struct Student *pEnd,*pNew;
	iCount=0;
	pEnd=pNew=(struct Student *)malloc(sizeof(struct Student));
	printf("请输入学生的姓名和学号：\n");
	scanf("%c",pNew->cName);
	scanf("%d",&pNew->iNumber);
	while (pNew->iNumber!=0){
		iCount++;
		if(iCount==1)
		{
			pNew->next=pHead;//指针指为空
			pEnd=pNew;
			pHead=pNew; //头指针指向首结点 
		}	
		else
		{
			pNew->next=NULL;//指针为空 
			pEnd->next=pNew;//旧结点指向新结点 
			pEnd=pNew;
		 } 
		 pNew=(struct Student *)malloc(sizeof(struct Student));//新创立一个空间
		 scanf("%c",pNew->cName);
		 scanf("%d",&pNew->iNumber); 
	}
	free(pNew); 
	return pHead;
}
void print(struct Student *pHead)
{
	struct Student *pTemp;//临时指针
	int iIndex=1;//学生的数量 
	printf("********本名单有%d个学生********\n",iCount);
	pTemp=pHead;//？？？？
	while (pTemp!=NULL)
	{
		printf("第%d个学生是：\n",iIndex);
		printf("姓名: %s\n",pTemp->cName) ;
		printf("学号： %d\n\n",pTemp->iNumber);
		pTemp=pTemp->next;
		iIndex++;
	 } 
	 
}
int main()
{
	struct Student *pHead;
	pHead=Create();
	print(pHead);//输出链表 
}
