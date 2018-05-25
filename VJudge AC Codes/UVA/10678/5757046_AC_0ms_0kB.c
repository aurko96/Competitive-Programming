#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,i,n;
    double x,y,z,pi;
    scanf("%d",&n);
    pi=2*acos(0.0);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        x=(b/2.0);
        y=sqrt((b/2.0)*(b/2.0)-(a/2.0)*(a/2.0));
        z=x*y*pi;
        printf("%0.3lf\n",z);
    }
    return 0;

}
