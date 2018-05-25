#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL dp[1005],n,dp2[1005][1005];
LL ncr(LL n,LL r)
{
    if(r==0)return 1;
    if(n==r)return 1;
    if(dp2[n][r]!=-1)return dp2[n][r];

    return dp2[n][r] = (ncr(n-1,r)+ncr(n-1,r-1))%10056;
}
LL call(LL x)
{
    if(x<0) return 0;
    if(x==0) return 1;
    if(dp[x]!=-1) return dp[x];
    LL ret=0;
    for(LL i=1;i<=x;i++)
    {
        ret+=ncr(x,i)*call(x-i);
        ret%=10056;
    }
    return dp[x]=ret%10056;
}
int main()
{
    LL i,t,x,y;
    cin>>t;
    memset(dp,-1,sizeof(dp));
    memset(dp2,-1,sizeof(dp2));
    for(i=1;i<=t;i++)
    {
        cin>>n;
        y=call(n);
        cout<<"Case "<<i<<": "<<y%10056<<"\n";
    }
}
