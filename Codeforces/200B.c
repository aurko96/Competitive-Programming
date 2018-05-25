#include<stdio.h>
int main()
{
    int i;
    double a,b,x=0,n;
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&a);
        x=x+a;
    }
    b=x/n;
    printf("%lf",b);
}
