#include<stdio.h>
int main()
{
    long long a,b,c;
    scanf("%I64d %I64d",&a,&b);
    c=a+b;
    if(c%2==0)
    {
        c=c+1;
        printf("%I64d",c);
    }
    else
    {
        c=c-1;
        printf("%I64d",c);
    }
}
