#include<stdio.h>
#include<math.h>
int main()
{
    double area,chang,s;
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a){
        chang=a+b+c;
        s=chang/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area = %.2lf; perimeter = %.2lf",area,chang);
    }
    else
    printf("These sides do not correspond to a valid triangle");
    return 0;
}
