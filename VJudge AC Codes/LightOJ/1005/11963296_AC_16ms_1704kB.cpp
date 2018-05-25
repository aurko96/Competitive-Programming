#include<bits/stdc++.h>
#define LL long long
using namespace std;
int x,y;
LL dp[50][50];
LL call(int pos,int rook)
{
    if(pos==x)
    {
        if(rook==y) return 1;
        else return 0;
    }
    if(dp[pos][rook]!=-1) return dp[pos][rook];
    LL ret=0;
    ret+=(x-rook)*call(pos+1,rook+1);
    ret+=call(pos+1,rook);
    return dp[pos][rook]=ret;
}
int main()
{
    int i,j,t;
    LL n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>x>>y;
        n=call(0,0);
        cout<<"Case "<<i<<": "<<n<<"\n";
    }
}