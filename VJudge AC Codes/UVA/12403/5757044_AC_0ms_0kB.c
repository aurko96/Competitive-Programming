#include<stdio.h>
int main()
{
    char a[100];
    long long i,j,n,p,x=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&a);
        if(a[0]=='d')
        {
            scanf("%lld",&p);
            x=x+p;
        }
        else if(a[0]=='r')
        {
            printf("%lld\n",x);
        }

    }
    return 0;
}
