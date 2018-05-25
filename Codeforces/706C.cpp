#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

LL n,ara[100005];
LL dp[100005][2];
string str[100005];

LL call(LL pos,LL rev)
{
    if(pos==n) return 0;
    if(dp[pos][rev]!=-1) return dp[pos][rev];
    LL x=1e18,y=1e18;
    string s1,s2;
    s1=str[pos-1];
    s2=str[pos];
    reverse(s2.begin(),s2.end());
    if(rev) reverse(s1.begin(),s1.end());
    if(s1<=str[pos]) x=call(pos+1,0);
    if(s1<=s2) y=ara[pos]+call(pos+1,1);
    return dp[pos][rev]=min(x,y);
}

int main()
{
    FastRead
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(LL i=0;i<n;i++) cin>>ara[i];
    for(LL i=0;i<n;i++) cin>>str[i];
    LL x;
    x=min(call(1,0),ara[0]+call(1,1));
    if(x==1e18) cout<<-1<<"\n";
    else cout<<x<<"\n";
}
