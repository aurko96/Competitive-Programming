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
        d=c/a;
        while(d>=0)
        {
            int e=c-d*a;
            if(e==0)
                printf("Yes");
            else
                d--;
        }
    }
    else printf("No");

}

