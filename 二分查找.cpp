# include<stdio.h>
int Bsearch(int *p, int n, int x);     
int main(void)   
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};    
    int x, m;
    scanf("%d",&x);                
    m = Bsearch(a, 10, x);
    if(m >= 0)   
        printf("Index is %d\n",m);
    else 
        printf( "Not Found\n");
		
    return 0;
}
int Bsearch(int *p, int n, int x)// p�������׵�ַ��n������Ԫ�ظ�����x��Ҫ���ҵ�ֵ���ҵ������±꣬�Ҳ�������-1
{
	int i;
	int mid,first,last;
	first = 0;
	last = n-1;
	while(first<=last)
	{
		mid = (first+last)/2;
		if(p[mid]==x)
		{
			return mid;
		}
		else if(p[mid]<x)//���Ҳ��� 
		{
			first = mid + 1;
		}
		else if(p[mid>x])
		{
			last = mid - 1;
		}
	}
	return -1;
	
}
