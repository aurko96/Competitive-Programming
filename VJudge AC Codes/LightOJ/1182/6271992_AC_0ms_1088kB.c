#include<stdio.h>
int main()
{
    int a,count=0,i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        count=0;
        while(a>0)
        {
            if(a%2==0)
            {
                a/=2;
 
            }
            else
            {
                a/=2;
                count++;
            }
        }
        if(count%2==0)
        {
            printf("Case %d: even\n",i);
        }
        else
        {
            printf("Case %d: odd\n",i);
        }
    }
}
 