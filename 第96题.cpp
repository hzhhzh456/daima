#include<stdio.h>
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) 
{
    struct ListNode* p;
    struct ListNode* q;
    int length=0;
    int i,j;
 
    if(head->next==NULL) return head;
    p=head->next;
    while(p){
        length++;//����������
        p=p->next;
    }
    
    i=length-n;//���㵹����n���ڵ��ǵڼ����ڵ�  3
    p=head->next;
    j=0;
    if(i==-1&&length==0)
    {
        head=NULL;
        return head;
    }
    
    if(i==-1)//���Ҫɾ����������ĵ�һ���ڵ�
    {
        head->next=p->next;
        return head;
    }
    
    while(p->next&&j<i-1)
    {
        p=p->next;//���ҵ�i-1���ڵ�
        j++;
    }
    
    q=p->next;//qָ���i���ڵ�
    if(n==1)//Ҫɾ��������������һ���ڵ�
    {
        p->next=NULL;
    }
    else
    {  
    p->next=q->next;//�޸����ӹ�ϵ
    }
    free(q);
    return head;
}


