#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

vector<int>edge[100005];
pair<int,int>pp[100005];
bool vis[100005];

void dfs(int node,int pre)
{
    if(vis[node]==1) return;
    else vis[node]=1;
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        if(x==pre) continue;
        dfs(x,node);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>pp[i].ff;
        pp[i].ss=i+1;
    }
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    sort(pp,pp+n);
    LL ans=0;
    for(int i=0;i<n;i++)
    {
        if(vis[pp[i].ss]==0)
        {
            ans+=pp[i].ff;
            dfs(pp[i].ss,-1);
        }
    }
    cout<<ans<<"\n";
}
