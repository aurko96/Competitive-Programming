#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL dp[100001];
LL sum[100001];
LL mod=1e9+7,k;
LL call(LL lim)
{
    if(lim<0) return 0;
    if(lim==0) return 1;
    if(dp[lim]!=-1) return dp[lim];
    return dp[lim]=(call(lim-1)+call(lim-k))%mod;
}
int main()
{
    LL t;
    cin>>t>>k;
    LL x;
    memset(dp,-1,sizeof(dp));
    for(LL i=1;i<=100000;i++)
    {
        sum[i]=(sum[i-1]+call(i))%mod;
    }
    for(LL i=0;i<t;i++)
    {
        LL a,b;
        cin>>a>>b;
        //cout<<"helloo  "<<sum[a]<<" "<<sum[b]<<endl;
        cout<<((sum[b]-sum[a-1])%mod+mod)%mod<<"\n";
    }
}
