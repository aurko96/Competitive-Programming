#include<bits/stdc++.h>
using namespace std;
long long dp[100005],ara[100005],mx;
long long call(long long n)
{
    long long set_1,set_2,high;
    if(n>mx) return 0;
    if(dp[n]!=-1) return dp[n];
    set_1 = call(n+1);
    set_2 = n*ara[n]+call(n+2);
    high=max(set_1,set_2);
    return dp[n]=high;
}
int main()
{
    memset(dp,-1,sizeof(dp));
    memset(ara,0,sizeof(ara));
    long long i,j,n,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        mx=max(mx,x);
        ara[x]++;
    }
    cout<<call(1);
}
