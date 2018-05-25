#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL ara[1005],sum[1005],dp[110][110];
LL call(LL left,LL right)
{
    if(left>right) return 0;
    if(dp[left][right]!=-1) return dp[left][right];
    LL ret=-1e16;
    for(int i=left;i<=right;i++) ret=max(ret,sum[i]-sum[left-1]-call(i+1,right));
    for(int i=right;i>=left;i--) ret=max(ret,sum[right]-sum[i-1]-call(left,i-1));
    return dp[left][right]=ret;
}
int main()
{
    LL i,j,n,x,y,z;
    while(cin>>n)
    {
        if(n==0) break;
        memset(dp,-1,sizeof(dp));
        memset(sum,0,sizeof(sum));
        memset(ara,0,sizeof(ara));
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
            sum[i]=sum[i-1]+ara[i];
        }
        x=call(1,n);
        cout<<x<<"\n";
    }
}
