#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a!=1 && b!=1 && c!=1)
    {
        printf("%d",a*b*c);
    }
    else if(a==1 && b==1 && c==1)
    {
        printf("%d",a+b+c);
    }
    else if (a==1 && c==1)
    {
        printf("%d",a+b+c);
    }
    else if(a==1 && b==1)
    {
        printf("%d",(a+b)*c);
    }
    else if (b==1 && c==1)
    {
        printf("%d",a*(b+c));
    }
    else if(a==1 || b==1 && c>a)
    {
        printf("%d",(a+b)*c);
    }
    else if (b==1 || c==1 && a>c)
    {
        printf("%d",a*(b+c));
    }

}
