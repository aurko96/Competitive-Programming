#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n,m,w,yy[200];
int dp[200][200];

int call(int mov,int pos)
{
    if(mov==0 || pos>=n) return 0;
    if(dp[mov][pos]!=-1) return dp[mov][pos];
    int ret=0;
    for(int i=pos;i<n;i++)
    {
        int cnt=0,idx=i;
        while(idx<n && yy[idx]<=yy[i]+w)
        {
            idx++;
            cnt++;
        }
        ret=max(ret,cnt+call(mov-1,idx));
    }
    return dp[mov][pos]=ret;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
       cin>>n>>w>>m;
       int x;
       for(int j=0;j<n;j++) cin>>x>>yy[j];
       sort(yy,yy+n);
       int ans=0;
       for(int j=0;j<n;j++) ans=max(ans,call(m,j));
       cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}
