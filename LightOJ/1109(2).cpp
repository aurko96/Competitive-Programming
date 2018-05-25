#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,k,x,y,z,m,t,p,q,count;
    //scanf("%lld",&t);
        scanf("%I64d",&x);
        q=n=0;
        for(i=x;i<=x;i++)
        {
            m=sqrt(i);
            long long mx=0;
            for(j=1,count=0;j<=m;j++)
            {
                if(i%j==0)
                {
                    mx=max(mx,j);
                    printf("%lld\n",j);
                    count+=2;
                    if(i/j==j) count--;
                }
            }
           // printf("%I64d\n",mx);
            if(count>n)
            {
                q=i;
                n=count;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",x,x,q,n);
   main();
}
