#include<bits/stdc++.h>
#define LL long long
using namespace std;
vector<int>edge[10005];
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
    int i,j,n,x,y,z,count=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        edge[i].push_back(x);
        edge[x].push_back(i);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            count++;
            dfs(i,-1);
        }
    }
    cout<<count<<"\n";
}
