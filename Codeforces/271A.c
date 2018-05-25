#include<stdio.h>
int main()
{
    int n,a,b,c,x,y,z;
    scanf("%d",&n);
    for(;;)
    {
        n++;
        a=n%100;
        b=a%10;
        c=a/10;
        x=n/100;
        y=x%10;
        z=x/10;
        if(b!=c && y!=z && b!=y && b!=z && c!=y && c!=z)
        {
            printf("%d",n);
            break;
        }

    }
}
