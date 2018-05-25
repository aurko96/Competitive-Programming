#include<stdio.h>
int main()
{
    int a,n,e=1;
    scanf("%d",&n);
    while(e*5<=5)
    {
        n=n-(e*5);
        e=e*2;

    }

    printf("%d",n);
}
