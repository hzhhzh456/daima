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
	printf("������ѧ����������ѧ�ţ�\n");
	scanf("%c",pNew->cName);
	scanf("%d",&pNew->iNumber);
	while (pNew->iNumber!=0){
		iCount++;
		if(iCount==1)
		{
			pNew->next=pHead;//ָ��ָΪ��
			pEnd=pNew;
			pHead=pNew; //ͷָ��ָ���׽�� 
		}	
		else
		{
			pNew->next=NULL;//ָ��Ϊ�� 
			pEnd->next=pNew;//�ɽ��ָ���½�� 
			pEnd=pNew;
		 } 
		 pNew=(struct Student *)malloc(sizeof(struct Student));//�´���һ���ռ�
		 scanf("%c",pNew->cName);
		 scanf("%d",&pNew->iNumber); 
	}
	free(pNew); 
	return pHead;
}
void print(struct Student *pHead)
{
	struct Student *pTemp;//��ʱָ��
	int iIndex=1;//ѧ�������� 
	printf("********��������%d��ѧ��********\n",iCount);
	pTemp=pHead;//��������
	while (pTemp!=NULL)
	{
		printf("��%d��ѧ���ǣ�\n",iIndex);
		printf("����: %s\n",pTemp->cName) ;
		printf("ѧ�ţ� %d\n\n",pTemp->iNumber);
		pTemp=pTemp->next;
		iIndex++;
	 } 
	 
}
int main()
{
	struct Student *pHead;
	pHead=Create();
	print(pHead);//������� 
}
