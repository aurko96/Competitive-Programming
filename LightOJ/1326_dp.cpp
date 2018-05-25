#include<bits/stdc++.h>
using namespace std;
int dp[1005],mod=10056;
int call(int val)
{
    int ans=0;
    if(val==0) return 1;
    if(dp[val]!=-1) return dp[val];
    for(int i=1;i<=val;i++)
    {
        ans+=call(val-i)%mod;
    }
    return dp[val]=ans%mod;
}
int main()
{
    int i,j,n,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>x;
        int y;
        y=call(x);
        cout<<y%mod<<"\n";
    }
}
