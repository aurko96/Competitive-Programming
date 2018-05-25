#include<stdio.h>
int main()
{
    int i,n,a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(c>a && c>b && c*c==(a*a)+(b*b))
        {
            printf("Case %d: yes\n",i);
        }
        else if(b>a && b>c && b*b==(a*a)+(c*c))
        {
            printf("Case %d: yes\n",i);
        }
        else if(a>b && a>c && a*a==(b*b)+(c*c))
        {
            printf("Case %d: yes\n",i);
        }
        else
            {
                printf("Case %d: no\n",i);
            }
 
    }
}
 