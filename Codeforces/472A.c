#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    if(n%2==0)
    {
        a=n-8;
        if(a<8)
        {
            printf("%d 8",a);
        }
        else
        {
            printf("8 %d",a);
        }
    }
    else
    {
        b=n-9;
        if(b<9)
        {
            printf("%d 9",b);
        }
        else
        {
            printf("9 %d",b);
        }
    }
}
