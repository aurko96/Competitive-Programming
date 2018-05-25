#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int n,k,ara[100002];
LL dp[100001][12];
LL call(int pos,int len)
{
    if(pos==n-1)
    {
        if(len==k+1) return 1;
        else return 0;
    }
    if(len==k+1) return 1;
    if(len>k+1) return 0;
    if(dp[pos][len]!=-1) return dp[pos][len];
    LL ret=0;
    for(int i=pos+1;i<n;i++)
    {
        if(ara[i]>ara[pos]) ret+=call(i,len+1);
    }
    return dp[pos][len]=ret;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&ara[i]);
    LL x=0;
    for(int i=0;i<n;i++)
    {
        x+=call(i,1);
    }
    printf("%lld\n",x);
}


