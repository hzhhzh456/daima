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
        length++;//计算链表长度
        p=p->next;
    }
    
    i=length-n;//计算倒数第n个节点是第几个节点  3
    p=head->next;
    j=0;
    if(i==-1&&length==0)
    {
        head=NULL;
        return head;
    }
    
    if(i==-1)//如果要删除的是链表的第一个节点
    {
        head->next=p->next;
        return head;
    }
    
    while(p->next&&j<i-1)
    {
        p=p->next;//查找第i-1个节点
        j++;
    }
    
    q=p->next;//q指向第i个节点
    if(n==1)//要删除的是链表的最后一个节点
    {
        p->next=NULL;
    }
    else
    {  
    p->next=q->next;//修改链接关系
    }
    free(q);
    return head;
}


