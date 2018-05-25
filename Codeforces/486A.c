#include<stdio.h>
int main()
{
    long long n;
    scanf("%I64d",&n);
    if(n%2==0)
    {
        n=n/2;
        printf("%I64d",n);
    }
    else
    {
        n=-(n+1)/2;
        printf("%I64d",n);
    }
}
