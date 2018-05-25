#include<stdio.h>
int main()
{
    long long a[100000],i,n,p,x;
    scanf("%I64d %I64d",&n,&p);
    for(i=0;i<n-1;i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        i=a[i-1]+i;
        if(i==p)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}
