// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int ara[100];
int n;
LL dp[52][2];
LL call(int pos,int val)
{
    LL ret;
    //cout<<ret<<endl;
    if(pos==n) return 0;
    if(dp[pos][val]!=-1) return dp[pos][val];
    if(val==0)  // bob
    {
        ret=call(pos+1,val);
        ret=max(ret,ara[pos]+call(pos+1,1-val));
        dp[pos][val]=ret;
    }
    else if(val==1)  // alice
    {
        ret=ara[pos]+call(pos+1,val);
        ret=min(ret,call(pos+1,1-val));
        dp[pos][val]=ret;
    }
    return dp[pos][val];  // value for bob
}

int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>n;
    LL sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    int x;
    x=call(0,0);
    //cout<<pp.ff<<" "<<pp.ss<<"\n";
    cout<<sum-x<<" "<<x<<"\n";

}
