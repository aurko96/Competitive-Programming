#include<bits/stdc++.h>
using namespace std;
int dp[10000];
int main()
{
    int i,j,n,x,y,z;
    int ara[]={1,5,10,25,50};
    dp[0]=1;
    for(i=0;i<5;i++)
    {
        for(j=ara[i];j<=8000;j++)
        {
            dp[j]+=dp[j-ara[i]];
        }
    }
    while(cin>>n) cout<<dp[n]<<"\n";
}
