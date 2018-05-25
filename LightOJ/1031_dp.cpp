#include<bits/stdc++.h>
using namespace std;
int dp[105][105];
int ara[500];
int call(int st,int ed)
{
    if(st>ed) return 0;
    if(st==ed) return ara[st];
    if(dp[st][ed]!=-1) return dp[st][ed];
    int ret=-1e9,ret2=-1e9,ff=0,ss=0;
    for(int i=st;i<=ed;i++)
    {
        ff+=ara[i];
        ret=max(ret,ff-call(i+1,ed));
    }
    for(int i=ed;i>=st;i--)
    {
        ss+=ara[i];
        ret2=max(ret2,ss-call(st,i-1));
    }
    return dp[st][ed]=max(ret,ret2);
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        int n;
        cin>>n;
        for(int j=0;j<n;j++) cin>>ara[j];
        int x;
        x=call(0,n-1);
        cout<<"Case "<<i<<": "<<x<<"\n";
    }
}
