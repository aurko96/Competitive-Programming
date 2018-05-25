#include<stdio.h>
int main()
{
    int i,n,a,b=0,c,x=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x+i;
    }
    for(i=1;i<n;i++)
    {
        scanf("%d",&a);
        b=b+a;
    }
    //printf("%d",b);
    c=x-b;
    printf("%d",c);
}
