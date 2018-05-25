#include<stdio.h>
int main()
{
    long long a,b,i,n;
    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%I64d",&a);
        b=a*a;
        if(b%2==0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
}
