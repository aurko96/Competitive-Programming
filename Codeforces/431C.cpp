#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL mod=1000000007;
LL dp[105][105];
LL call(LL node,LL tree)
{
    if(node<0) return 0;
    if(node==0) return 1;
    if(dp[node][tree]!=-1) return dp[node][tree];
    LL ret=0;
    for(int i=1;i<=tree;i++)
    {
        ret+=call(node-i,tree);
        ret%=mod;
    }
    return dp[node][tree]=ret;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    LL i,j,n,k,x;
    cin>>n>>k>>x;
    memset(dp,-1,sizeof(dp));
    i=(call(n,k)%mod+mod)%mod;  //number of paths of weight n of the k-tree
    j=(call(n,x-1)%mod+mod)%mod;  //number of paths of edges having weight less than x
    cout<<((i-j)%mod+mod)%mod<<"\n"; //number of path of weight n having at least one edge of weight x
}
