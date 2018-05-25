#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int n,m;
int ara[100005],dp[100005],cnt[100005];

int call(int pos)
{
    if(pos==n) return 0;
    if(dp[pos]!=-1) return dp[pos];
    int ret;
    cnt[ara[pos]]++;
    if(cnt[ara[pos]]>1) ret=call(pos+1);
    else ret=1+call(pos+1);
    return dp[pos]=ret;
}
int main()
{
    FastRead
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        //cnt[ara[i]]++;
    }
    int x;
    x=call(0);
   // cout<<"X  = "<<x<<endl;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        memset(cnt,0,sizeof(cnt));
        memset(dp,-1,sizeof(dp));
        cout<<call(y-1)<<"\n";
    }
}
