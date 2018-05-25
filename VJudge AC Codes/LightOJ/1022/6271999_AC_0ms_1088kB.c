#include<stdio.h>
#include<math.h>
int main()
{
    double r,s,pi=2*acos(0.0);
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&r);
        s=(((r*r)*4)-(pi*r*r));
        printf("Case %d: %0.2lf\n",i,s);
    }
}