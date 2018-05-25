#include<bits/stdc++.h>
#define INF 2e9
using namespace std;
int ara[100][100],dp[25][5],n;
int call(int pos,int index)
{
    if(pos<0) return 0;
    if(dp[pos][index]!=-1) return dp[pos][index];
    int ret=INF;
    for(int i=0;i<3;i++)
    {
        if(index!=i)ret=min(ret,call(pos-1,i));
    }
    //cout<<pos<<" "<<index<<endl;
    //cout<<ara[pos][index]<<endl;
    return dp[pos][index]=ret+ara[pos][index];
}
int main()
{
    int i,j,k,t,x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        memset(ara,0,sizeof(ara));
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(j=0;j<n;j++)
        {
            for(k=0;k<3;k++) cin>>ara[j][k];
        }
        x=min(call(n-1,0),min(call(n-1,1),call(n-1,2)));
        cout<<"Case "<<i<<": "<<x<<"\n";
    }
}
