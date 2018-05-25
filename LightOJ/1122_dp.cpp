#include<bits/stdc++.h>
using namespace std;
int ara[100],n,m;
int dp[50][50];
int call(int pos,int num)
{
    int ret=0;
    if(pos==m) return 1;
    if(dp[pos][num]!=-1) return dp[pos][num];
    for(int i=0;i<n;i++)
    {
        if(abs(ara[i]-num)<=2) ret+=call(pos+1,ara[i]);
    }
    return dp[pos][num]=ret;
}
int main()
{
    int i,j,t,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ans=0;
        memset(dp,-1,sizeof(dp));
        cin>>n>>m;
        for(j=0;j<n;j++) cin>>ara[j];
        for(j=0;j<n;j++) ans+=call(1,ara[j]);
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}
