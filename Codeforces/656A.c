#include<stdio.h>
int main()
{
    long long a[1000],i,j,n,x=0;
    scanf("%I64d",&n);
    for(i=1,j=0;j<=n;i=i*2,j++)
    {
        a[j]=1*i;
        if(j==n)
        {
            x=a[j];
        }
    }
    printf("%I64d",x);
}
