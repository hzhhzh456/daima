#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
double funcos( double e, double x )
{
    double a1=1,a2=1,a3=1,sum=1;
    int i,k;
    k=-1;
    for(i=2;a1>e;i+=2)
    {
        a2=a2*x*x;//����,������һ��ֱ�Ӵӵڶ��ʼ
        a3=a3*i*(i-1);//��ĸ
        sum=sum + k*a2/a3;
        a1=a2/a3;
        k=-k;
    }
    return sum;
    
}


