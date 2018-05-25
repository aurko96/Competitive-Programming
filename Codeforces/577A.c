#include<stdio.h>
int main()
{
    long long a,i,j,n,p,count=0;
    scanf("%I64d %I64d",&n,&p);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a=(i+1)*(j+1);
            if(a==p)
            {
                count++;
            }
        }
    }
    printf("%I64d",count);
}
