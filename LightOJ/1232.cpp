#include<bits/stdc++.h>
using namespace std;
int val[105],n,k;
long long dp[10005];
int mod=100000007;
long long call(int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(val[i]<=j)
            {
                dp[j]=dp[j]%mod + dp[j-val[i]]%mod;
            }
        }
    }
    return dp[sum];
}
int main()
{
    int i,j,y,z,t;
    long long x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&k);
        for(j=0;j<n;j++) scanf("%d",&val[j]);
        dp[0]=1;
        for(j=1;j<=k;j++) dp[j]=0;
        x=call(k);
        printf("Case %d: %lld\n",i,x%mod);
    }
}

