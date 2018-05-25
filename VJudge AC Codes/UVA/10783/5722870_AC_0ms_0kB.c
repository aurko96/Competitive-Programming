#include<stdio.h>
int main()
{
    int i,j,n,a,b,x,y,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        if(a%2==0)
        {
            for(j=a+1;j<=b;j=j+2)
            {
                sum=sum+j;
            }
            printf("Case %d: %d\n",i,sum);
        }
        else
        {
            for(j=a;j<=b;j=j+2)
            {
                sum=sum+j;
            }
            printf("Case %d: %d\n",i,sum);
        }

    }
    return 0;
}
