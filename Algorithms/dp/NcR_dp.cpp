#include<bits/stdc++.h>
#define LL long long
using namespace std;

LL dp[75][75];

LL call(LL n,LL r)
{
    if(r==0)return 1;
    if(n==r)return 1;
    if(dp[n][r]!=-1)return dp[n][r];

    return dp[n][r] = call(n-1,r)+call(n-1,r-1);
}

int main()
{
    memset(dp,-1,sizeof dp);

    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b>(a-1)) cout<<0<<"\n";
        else cout << call(a-1,b) << "\n";
    }

}
