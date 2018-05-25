#include<bits/stdc++.h>
using namespace std;
long long n,k;
long long val[1005],coin[1005],dp[500][1005];
long long call(long long paisha,long long sum)
{
    long long ans=0;
    if(sum==k) return 1;
    if(paisha==n) return 0;
    if(dp[paisha][sum]!=-1) return dp[paisha][sum];
    for(int i=0;i<=coin[paisha] && sum+(i*val[paisha])<=k;i++)
    {
        ans+=call(paisha+1,sum+(i*val[paisha]));
        ans=ans%100000007;
    }
    return dp[paisha][sum]=ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long i,j,x,y,z,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>k;
        for(j=0;j<n;j++) cin>>val[j];
        for(j=0;j<n;j++) cin>>coin[j];
        memset(dp,-1,sizeof(dp));
        x=call(0,0);
        cout<<"Case "<<i<<": "<<x<<"\n";
    }
}
