#include<stdio.h>
int main()
{
    long long n;
    scanf("%I64d",&n);
    if(n%2==0 && n!=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
