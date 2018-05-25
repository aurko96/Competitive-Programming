#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n,k,dp[50][50];
LL ara[1005],cnt;
LL call(int pos,int index)
{
    if(pos==n) return 0;
    if(dp[pos][index]!=-1) return dp[pos][index];
    LL ret=0,ans=0;

        ans=ara[pos]*ara[index];
        cout<<pos<<" "<<index<<" "<<ans<<endl;
        if(ans<=k) cnt++;
        ans+=call(pos+1,index+1);
        ans+=call(pos+1,index);
        dp[pos][index]=ret;
    return dp[pos][index];
}
int main()
{
    LL i,j,x,y,z;
    cin>>n>>k;
    for(i=0;i<n;i++) cin>>ara[i];
    memset(dp,-1,sizeof(dp));
    x=call(0,0);
    cout<<"result = "<<x<<" "<<cnt<<endl;
}
