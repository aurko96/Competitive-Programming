#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL dp[10005];
int main()
{
    LL i,j,n,x,y,ara[10005];
    for(i=1;i<=21;i++)
    {
        ara[i]=i*i*i;
    }
    dp[0]=1;
    for(i=1;i<=21;i++)
    {
        for(j=ara[i];j<=10002;j++)
        {
            dp[j]+=dp[j-ara[i]];
        }
    }
    while(cin>>n) cout<<dp[n]<<"\n";
}
