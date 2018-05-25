#include<stdio.h>
int main()
{
    long long i,n,x,a,sum=0;
    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%I64d",&a);
        sum=sum+a;
    }
    x=sum/4;
    if(sum%4==0)
    {
        printf("%I64d",x);
    }
    else
    {
        x++;
        printf("%I64d",x);
    }

}
