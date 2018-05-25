#include<stdio.h>
int main()
{
    int x1,x2,y1,y2,a,b;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    a=x2-x1;
    b=y2-y1;
    if(a<0)
    {
        a=(-a);
    }
    else
        a=a;
    if(b<0)
    {
        b=(-b);
    }
    else
        b=b;
    if(a>=b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}
