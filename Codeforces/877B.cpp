#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n;
string str;
int dp[5005][5];
int call(int pos,int flag)
{
    if(pos==n) return 0;
    if(dp[pos][flag]!=-1) return dp[pos][flag];
    int ret=0,ret1,ret2;
    if(str[pos]=='a' && flag==0)
    {
        ret1=1+call(pos+1,0);
        ret2=call(pos+1,0);
        ret=max(ret,max(ret1,ret2));
    }
    else if(str[pos]=='b' && flag==0)
    {
        ret1=1+call(pos+1,1);
        ret2=call(pos+1,0);
        ret=max(ret,max(ret1,ret2));
    }
    else if(str[pos]=='a' && flag==1)
    {
        ret1=1+call(pos+1,2);
        ret2=call(pos+1,1);
        ret=max(ret,max(ret1,ret2));
    }
    else if(str[pos]=='b' && flag==1)
    {
        ret1=1+call(pos+1,1);
        ret2=call(pos+1,1);
        ret=max(ret,max(ret1,ret2));
    }
    else if(str[pos]=='b' && flag==2)
    {
        ret1=call(pos+1,2);
        ret2=call(pos+1,2);
        ret=max(ret,max(ret1,ret2));
    }
    else if(str[pos]=='a' && flag==2)
    {
        ret1=1+call(pos+1,2);
        ret2=call(pos+1,2);
        ret=max(ret,max(ret1,ret2));
    }
    return dp[pos][flag]=ret;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>str;
    n=str.size();
    int x;
    x=call(0,0);
    cout<<x<<"\n";
}
