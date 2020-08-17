#define MAXSIZE
//创建线性表 
typedef int ElemType;
typedef struct
{
	ElemType elem[MAXSIZE];
	int length;
}seqList;
//初始化
seqList L; 
void init_seqList(seqList *e)
{
	L->length=0;
 } 
Init_seqList(&L);
//插入
int Insert_SeqList(seqList *L,int i,ElemType x)
{
	int j;
	if(L->length==MAXSIZE-1)
	{
		printf("表满");
		return OVERFLOW;
	}
	if(i<1||i>L->length+1)
	{
		printf("位置错");
		return ERROR; 
	}
	if(i<=L->length)
	{
		for(j=L->length;j>=i;j--)
	}
 } 
