#include<stdio.h>
int main()
{
    long long x,y,n,m,a;
    scanf("%lld %lld %lld",&n,&m,&a);
    if(n%a==0)
    {

        x=n/a;

    }
    else
    {

        x=n/a;
        x++;

    }
    if(m%a==0)
    {

        y=m/a;

    }
    else
    {

        y=m/a;
        y++;

    }
    printf("%lld\n",x*y);
    return 0;

}