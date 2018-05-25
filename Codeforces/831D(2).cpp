// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
    LL n,k,p;
    LL pp[5000],key[5000];
    LL dp[1005][2005];
LL call(LL pos,LL kk)
{
    if(pos>=n) return 0;
    if(kk>=k) return 0;
    if(dp[pos][kk]!=-1) return dp[pos][kk];
    LL ret=1e16,x,y,z;
    x=abs(pp[pos]-key[kk]);
    y=abs(key[kk]-p);
    z=x+y;
    ret=min(ret,z+call(pos+1,kk+1));
    cout<<ret<<endl;
    ret=min(ret,call(pos+1,kk));
    cout<<ret<<endl;
    return dp[pos][kk]=ret;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n>>k>>p;
    for(int i=0;i<n;i++) cin>>pp[i];
    for(int i=0;i<k;i++) cin>>key[i];
    sort(pp,pp+n);
    sort(key,key+k);
    LL x;
    x=call(0,0);
    cout<<x<<"\n";
}
