#define MAXSIZE
//�������Ա� 
typedef int ElemType;
typedef struct
{
	ElemType elem[MAXSIZE];
	int length;
}seqList;
//��ʼ��
seqList L; 
void init_seqList(seqList *e)
{
	L->length=0;
 } 
Init_seqList(&L);
//����
int Insert_SeqList(seqList *L,int i,ElemType x)
{
	int j;
	if(L->length==MAXSIZE-1)
	{
		printf("����");
		return OVERFLOW;
	}
	if(i<1||i>L->length+1)
	{
		printf("λ�ô�");
		return ERROR; 
	}
	if(i<=L->length)
	{
		for(j=L->length;j>=i;j--)
	}
 } 
