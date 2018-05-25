#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int dp[66][1000002];
int n,ara[100];
int convert(int x)
{
    vector<int>vv;
    while(x)
    {
        int a;
        a=x%2;
        vv.push_back(a);
        x/=2;
    }
    int ans=0;
    for(int i=0,j=1;i<vv.size();i++,j*=10)
    {
        ans=(vv[i]*j)+ans;
    }
    return ans;
}
int call(int pos,int val)
{
    //cout<<pos<<" "<<val<<endl;
    if(val==n) return 1;
    if(pos>=65) return 0;
    if(val>n) return 0;
    if(dp[pos][val]!=-1) return dp[pos][val];
    int ret=1e9;
    for(int i=1;i<=64;i++)
    {
        ret=min(ret,call(pos+i,val+ara[pos]));
        ret=min(ret,call(pos+i,val));

    }
    return dp[pos][val]=ret;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<=64;i++)
    {
        ara[i]=convert(i);
    }
    int ans=0;
    ans=call(0,0);
    cout<<ans<<"\n";
}
