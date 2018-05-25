#include<stdio.h>
int main()
{
    long long a,b,c,i=-1000000000,n,k;
    scanf("%I64d %I64d",&n,&k);
    while(n--)
    {
        scanf("%I64d %I64d",&a,&b);
        if(b>k)
        {
            c=a-(b-k);
            if(c>i)
            {
                i=c;
            }
        }
        else
        {
            c=a;
            if(c>i)
            {
                i=c;
            }
        }

    }
    printf("%I64d",i);
}
