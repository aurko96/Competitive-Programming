#include<stdio.h>
int main()
{
    int x,y,m,n;
    scanf("%d %d",&m,&n);
    if(m%2==0)
    {
        x=m/2;
        printf("%d",x);
    }
    else
    {
        x=m-2;
        printf("%d",x);
    }
    if(n%2==0)
    {
        y=n/1;
        printf("%d",y);
    }
    else
    {
        y=n-1;
        printf("%d",y);
    }
    printf("%d",x+y);

}
