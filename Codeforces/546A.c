#include<stdio.h>
int main()
{
    long long a,b,c,i,x,sum=0;
    scanf("%I64d %I64d %I64d",&a,&b,&c);
    for(i=1;i<=c;i++)
    {
        sum=sum+(i*a);
    }
    x=sum-b;
    if(x<0)
    {
        x=0;
        printf("%I64d",x);
    }
    else
    {
        printf("%I64d",x);
    }
}
