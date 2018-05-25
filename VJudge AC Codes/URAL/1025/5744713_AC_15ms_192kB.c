#include<stdio.h>
int main()
{
    long long a[1000],i,j,n,x,y,z,temp,sum=0;
    scanf("%I64d",&n);
    x=(n/2)+1;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<x;i++)
    {
        a[i]=(a[i]/2)+1;
        sum=sum+a[i];
    }
    printf("%I64d",sum);
    return 0;
}
