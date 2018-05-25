#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL dp[3000005];
int main()
{
    LL i,j,n,x,y,z;
    LL ara[]={1,5,10,25,50};
    dp[0]=1;
    for(i=0;i<5;i++)
    {
        for(j=ara[i];j<=3000002;j++)
        {
            dp[j]+=dp[j-ara[i]];
        }
    }
    while(cin>>n)
    {
        if(dp[n]>1) cout<<"There are "<<dp[n]<<" ways to produce "<<n<<" cents change.\n";
        else cout<<"There is only "<<dp[n]<<" way to produce "<<n<<" cents change.\n";
    }
}

