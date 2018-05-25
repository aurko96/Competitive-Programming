#include<stdio.h>
int main()
{
    int a,b,c,n,x;
    scanf("%d %d %d",&a,&b,&c);
    x=c%a;
    n=x+b;
    if(n<0)
    {
        n=(-n);
    }
    if(n==0)
    {
        n=a;
    }
    if(n>a)
    {
        n=n-a;
    }
    printf("%d\n",n);
    main();
}
