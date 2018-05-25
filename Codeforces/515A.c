#include<stdio.h>
int main()

{
    long long x,a,b,s;
    scanf("%I64d %I64d %I64d",&a,&b,&s);
    x=a+b;
    x=s-x;
    if(x==0)
    {
        printf("Yes\n");
    }
    else if(x<0)
    {
        printf("No\n");
    }
    else
    {
        if(x%2==0) printf("Yes\n");
        else printf("No\n");
    }

}
