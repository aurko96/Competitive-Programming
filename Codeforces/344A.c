#include<stdio.h>
int main()
{
    long long a[1000],i,n,x,y=0,count=1;
    scanf("%I64d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }
        else
        {
            x=count;
            if(x>y)
            {
                y=x;
            }
        }
    }
    printf("%I64d",y);
}
