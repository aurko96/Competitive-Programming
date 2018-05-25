#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n,ara[15][15];
int dp[1<<15];   // Bitmask DP

int Set(int N,int pos) { return N = N | (1<<pos); }
int Reset(int N,int pos) { return N = N & ~(1<<pos); }
bool Check(int N,int pos) { return (bool)(N & (1<<pos)); }

int call(int mask)
{
    if(mask==(1<<n)-1) return 0;
    if(dp[mask]!=-1) return dp[mask];
    int ret=1<<30;
    for(int i=0;i<n;i++)
    {
        if(Check(mask,i)==0)  // job not done
        {
            int price = ara[i][i];
            for(int j=0;j<n;j++)
            {
                if(i!=j && Check(mask,j))  // job previously done
                {
                    price+=ara[i][j];
                }
            }
            ret=min(ret,price+call(Set(mask,i)));
        }
    }
    return dp[mask]=ret;
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
        ans=call(0);
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}

