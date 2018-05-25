#include<bits/stdc++.h>
using namespace std;
int mod=100000000;
long long dp[150][150][20][20],x,y,i,m,n;;
long long call(long long  a,long long  b,long long  c,long long  d)
{
    if(a<0 || b<0 || c<0 || d<0) return 0;
    if(a==0 && b==0) return 1;
    if(dp[a][b][c][d]!=-1) return dp[a][b][c][d];
    return dp[a][b][c][d]=(call(a-1,b,c-1,y)+call(a,b-1,x,d-1))%mod;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>m>>n>>x>>y;
    i=call(m,n,x,y);
    cout<<i%mod;
}
