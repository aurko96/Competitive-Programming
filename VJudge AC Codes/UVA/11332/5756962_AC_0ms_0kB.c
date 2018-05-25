#include<stdio.h>
int add(int n);
int main()
{
    long long i,n,a,b,c,x;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)
        {
            return 0;
        }
        for(;;)
        {
            if(n/10==0)
            {
                break;
            }
            else
            {
                n=add(n);
            }
        }
        printf("%lld\n",n);

    }
    return 0;
}
int add(int n)
{
    int x=0;
    while(n!=0)
    {
        x=x+(n%10);
        n=n/10;
    }
    return x;
}
