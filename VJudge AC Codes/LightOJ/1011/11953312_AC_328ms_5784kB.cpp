#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n,ara[20][20];
int dp[16][1<<16];
 
int Set(int N,int pos){return N = N | (1<<pos);}
int Reset(int N,int pos){return N = N & ~(1<<pos);}
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
 
int call(int pos,int mask)
{
    if(pos==n) return 0;
    if(mask==(1<<n)-1) return 0;
    if(dp[pos][mask]!=-1) return dp[pos][mask];
    int ret=0;
    for(int i=0;i<n;i++)
    {
        if(!Check(mask,i))
        {
            ret=max(ret,ara[pos][i]+call(pos+1,Set(mask,i)));
        }
    }
    return dp[pos][mask]=ret;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++) cin>>ara[j][k];
        }
        int ans;
        ans=call(0,0);
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}