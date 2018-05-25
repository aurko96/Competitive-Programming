#include<bits/stdc++.h>
#define LL long long
using namespace std;
string str;
LL n,dp[62][62];

LL call(int st,int ed)
{
    if(st>ed) return 0;
    if(st==ed) return 1; // forms a palindrome
    if(dp[st][ed]!=-1) return dp[st][ed];
    LL ret=0;
    ret=call(st+1,ed)+call(st,ed-1)-call(st+1,ed-1); // As the 3rd call is common to the first two calls, so we subtract it
    if(str[st]==str[ed]) ret+=1+call(st+1,ed-1); // characters taken form a palindrome
    return dp[st][ed]=ret;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>str;
        n=str.size();
        LL ans;
        ans=call(0,n-1);
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}
