#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int n,ara[500];
int dp[500][2][2];
int call(int pos,int gym,int code)
{
    if(pos==n) return 0;
    if(dp[pos][gym][code]!=-1) return dp[pos][gym][code];
    int ret=1e9;
    if(ara[pos]==0)
    {
        ret=min(ret,1+call(pos+1,0,0));
    }
    else if(ara[pos]==1)
    {
        if(code==1) ret=min(ret,1+call(pos+1,0,0));
        else if(code==0)
        {
            ret=min(ret,call(pos+1,0,1));
            ret=min(ret,1+call(pos+1,0,0));
        }
    }
    else if(ara[pos]==2)
    {
        if(gym==1) ret=min(ret,1+call(pos+1,0,0));
        else if(gym==0)
        {
            ret=min(ret,call(pos+1,1,0));
            ret=min(ret,1+call(pos+1,0,0));
        }
    }
    else if(ara[pos]==3)
    {
        if(gym==1 && code==1) ret=min(ret,1+call(pos+1,0,0));
        else if(gym==1)
        {
            ret=min(ret,call(pos+1,0,1));
            ret=min(ret,1+call(pos+1,0,0));
        }
        else if(code==1)
        {
            ret=min(ret,call(pos+1,1,0));
            ret=min(ret,1+call(pos+1,0,0));
        }
        else
        {
            ret=min(ret,call(pos+1,1,0));
            ret=min(ret,call(pos+1,0,1));
            ret=min(ret,1+call(pos+1,0,0));

        }
    }
    return dp[pos][gym][code]=ret;
}
int main()
{
    FastRead
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++) cin>>ara[i];
    int x;
    x=call(0,0,0);
    cout<<x<<"\n";
}
