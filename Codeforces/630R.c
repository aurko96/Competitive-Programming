#include<stdio.h>
int main()
{
    long long a,b;
    scanf("%I64d",&a);
    b=a*a;
    if(b%2==0)
    {
        printf("2");
    }
    else
    {
        printf("1");
    }
}
