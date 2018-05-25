#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if(c-a==0 || c-b==0)
        printf("Yes");
    else if(c-a-b==0)
        printf("Yes");
    else if(c-a-b!=0 && c>0)
    {
        if(a<b)
        {
            b=a;
            a=b;
        }

        while(d>=0)
        {
            a=a*2;
            d=c-a-b;
            if(d==0)
            {
                printf("Yes");
                break;
            }
            else if(d!=0)
                continue;

        }
    }
    else printf("No");

}
