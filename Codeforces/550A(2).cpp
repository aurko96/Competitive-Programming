#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

string str;
int n,dp[100005][2][2];
int call(int pos,int flag,int found)
{
    if(pos==n)
    {
        if(found==1) return 0;
        else if(found==0) return 1;
    }
    if(dp[pos][flag][found]!=-1) return dp[pos][flag][found];
    int ret=0;
    string ss;
    ss+=str[pos];
    ss+=str[pos+1];
    //cout<<"string   "<<ss<<endl;
    if(ss=="AB" || ss=="BA")
    {
        if(flag==1) ret=max(ret,1+call(pos+1,1,1));
        else ret=max(ret,call(pos+1,1,1));
    }
    else
    {
        if(found==1) ret=max(ret,call(pos+1,0,1));
        else ret=max(ret,call(pos+1,0,0));
    }
    return dp[pos][flag][found]=ret;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cin>>str;
    n=str.size();
    int x;
    x=call(0,0,0);
    if(x>0) cout<<"NO\n";
    else cout<<"YES\n";
}
