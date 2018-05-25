

#include<bits/stdc++.h>

using namespace std;

#define inf 0x3f3f3f3f
#define LL long long
#define FastRead ios_base::sync_with_stdio(0);cin.tie(0);
#define LOJ cout<<"Case "<<++cs<<": "<<ans<<endl;
#define Max3(x,y,z) max(x,max(y,z))

//LL BigMod(LL B,LL P,LL M){LL R=1;while(P>0){if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;}return R;}
//LL InverseMod(LL B,LL M){return BigMod(B,M-2,M);}// if M is prime else Phi(M-1);
LL ara[1005],n,dp[1003][1003];

LL call(LL st,LL en)
{
    if(st==en)return ara[en];
    if(dp[st][en]!=-1)return dp[st][en];
    LL ret=0,i,j;

    ret=max(ara[st]-call(st+1,en),ara[en]-call(st,en-1));


    return dp[st][en]=ret;
}
int main()
{
    FastRead
    int test;
    cin>>test;
    while(test--)
    {
        memset(dp,-1,sizeof(dp));
        LL i,j,k,cnt,ans;
        cin>>n;
        for(i=0;i<n;i++)cin>>ara[i];
        ans=call(0,n-1);
        cout<<ans<<endl;

    }
}
