#include<stdio.h>
#include<math.h>
int main()
{
    long long i,j,n,k,x,y,z,m,t,p,q,count;
    scanf("%lld",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%lld %lld",&x,&y);
        q=n=0;
        for(i=x;i<=y;i++)
        {
            m=sqrt(i);
            for(j=1,count=0;j<=m;j++)
            {
                if(i%j==0)
                {
                    count+=2;
                    if(i/j==j) count--;
                }
            }
            if(count>n)
            {
                q=i;
                n=count;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",x,y,q,n);
    }
    return 0;
}
