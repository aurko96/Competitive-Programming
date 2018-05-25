#include<bits/stdc++.h>
#define ff first
#define ss second
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
vector<LL>edge[10005],child[10005];
bool vis[10005];
LL xoor[5001][5001],day[10005],ans[10005],val[10005];
    LL n,q;
void dfs(LL start,LL node,LL pre)
{
    if(vis[node]==1) return;
    else vis[node]=1;
    for(LL i=0;i<edge[node].size();i++)
    {
        LL x=edge[node][i];
        if(x==pre) continue;
        child[start].push_back(x);
        dfs(start,x,node);
    }
}
void xorsum()
{
    LL sum=0,sum2=0;
    for(LL k=1;k<=501;k++)
    {
    sum2=xoor[k][0];
        for(LL i=1;i<=n;i++)
        {
            sum=0;
           for(LL j=0;j<child[i].size();j++)
           {
               //cout<<k<<" "<<i<<" "<<child[i][j]<<endl;
               xoor[k][i]^=xoor[k-1][child[i][j]];
           }
           sum2^=xoor[k][i];
           //val[i]=sum;
        }
        val[k+1]=sum2;
        xoor[k+1][0]=sum2;

    }
}
int main()
{
    FastRead
    cin>>n>>q;
    for(LL i=0;i<n-1;i++)
    {
        LL x,y;
        cin>>x>>y;
        edge[x].push_back(y);
    }
    LL ara[n+1],sum=0;
    for(LL i=0;i<n;i++)
    {
        cin>>ara[i];
        xoor[0][i]=ara[i];
        sum^=ara[i];
    }
    xoor[1][0]=sum;
    val[1]=sum;
    for(LL i=1;i<n;i++)
    {
        dfs(i,i,-1);
        child[i].push_back(i);
        memset(vis,0,sizeof(vis));
    }
    xorsum();
    for(LL i=0;i<q;i++)
    {
        LL z;
        cin>>z;
        cout<<val[z]<<"\n";
    }
}
