#include<bits/stdc++.h>
#define LL long long
using namespace std;
vector<LL>vect[10005];
LL dp[10005];
LL call(LL pos)
{
    if(vect[pos].size()==0) return 1;
    if(dp[pos]!=-1) return dp[pos];
    int ret=0;
    for(int i=0;i<vect[pos].size();i++)
    {
        ret+=call(vect[pos][i]);
    }
    return dp[pos]=ret;
}
int main()
{
    LL i,j,n,x,y,z,flag=0;
    while(cin>>n)
    {
        memset(dp,-1,sizeof(dp));
        for(i=0;i<n;i++)
        {
            cin>>x;
            vect[i].clear();
            for(j=0;j<x;j++)
            {
                cin>>y;
                vect[i].push_back(y);
            }
        }
        z=call(0);
        if(flag) cout<<"\n";
        cout<<z<<"\n";
        flag=1;
    }
}
