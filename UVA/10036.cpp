#include<bits/stdc++.h>
using namespace std;
int dp[10005][102],ara[10005],n,x,vis[10005][102];
int call(int pos,int num)
{
    int ret=0;
    if(pos==n)
    {
        if(num==0) return 1;
        else return 0;
    }
    if(dp[pos][num]!=-1) return dp[pos][num];
    ret=call(pos+1,((num+ara[pos])%x+x)%x);
    ret=max(ret,call(pos+1,((num-ara[pos])%x+x)%x));
    return dp[pos][num]=ret;
}
int main()
{
    int i,j,y,z,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        y=0;
        memset(dp,-1,sizeof(dp));
        cin>>n>>x;
        for(j=0;j<n;j++)
        {
            cin>>ara[j];
            ara[j]%=x;
            ara[j]+=x;
            ara[j]%=x;
        }
        y=call(1,ara[0]);
        if(y) cout<<"Divisible\n";
        else cout<<"Not divisible\n";
    }
}
