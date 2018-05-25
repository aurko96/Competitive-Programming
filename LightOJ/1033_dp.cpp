#include<bits/stdc++.h>
using namespace std;
string str;
int dp[105][105];
int call(int l,int r)
{
    if(l>=r) return 0;
    if(dp[l][r]!=-1) return dp[l][r];
    if(str[l]==str[r]) dp[l][r]=call(l+1,r-1);
    else dp[l][r]=1+min(call(l+1,r),call(l,r-1));
    return dp[l][r];
}
int main()
{
    int i,j,n,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        str.clear();
        cin>>str;
        x=str.size();
        memset(dp,-1,sizeof(dp));
        int ans=call(0,x-1);
        printf("Case %d: %d\n",i,ans);
    }
}
