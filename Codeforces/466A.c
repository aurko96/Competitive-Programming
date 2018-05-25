#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,z;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a%b==0)
    {
        x=a/b;
        y=x*d;
        printf("%d",y);
    }
    else
    {
        x=a/b;
        y=x*d;
        z=c+y;
        printf("%d",z);
    }
}
