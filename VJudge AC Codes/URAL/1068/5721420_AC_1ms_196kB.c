#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    if(n>0)
    {
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("%d\n",sum);
    }
    else if(n<=0)
    {
        for(i=n;i<=1;i++)
        {
            sum=sum+i;
        }
        printf("%d\n",sum);
    }
    return 0;

}
