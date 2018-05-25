#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int n;
int dp[205][205];
double ara[205],ara2[205];

int call(int pos,int pre)
{
    if(pos>n) return 0;
    if(dp[pos][pre]!=-1) return dp[pos][pre];
    int ret=call(pos+1,pre);
    if(pre==0) ret=max(ret,1+call(pos+1,pos));
    else if(ara[pos]>ara[pre] && ara2[pos]<ara2[pre]) ret=max(ret,1+call(pos+1,pos));
    return dp[pos][pre]=ret;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        memset(dp,-1,sizeof(dp));
        memset(ara,0,sizeof(ara));
        memset(ara2,0,sizeof(ara2));
        cin>>n;
        for(int j=1;j<=n;j++) cin>>ara[j]>>ara2[j];
        int x;
        x=call(1,0);
        cout<<x<<"\n";
    }
}
