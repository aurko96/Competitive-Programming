#include<bits/stdc++.h>
using namespace std;
int n,k;
int ara[10005];
int dp[10005][105];
int call(int pos,int val)
{
    if(pos==n)
    {
        //cout<<val<<endl;
        if(val%k==0) return 1;
        else return 0;
    }
    if(dp[pos][val]!=-1) return dp[pos][val];
    int ret=0;
    ret=max(ret,call(pos+1,((val+ara[pos])%k+k)%k));
    ret=max(ret,call(pos+1,((val-ara[pos])%k+k)%k));
    return dp[pos][val]=ret;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>ara[i];
        int x;
        x=call(0,0);
        if(x==0) cout<<"Not divisible\n";
        else cout<<"Divisible\n";

    }
}
