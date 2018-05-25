#include<bits/stdc++.h>
using namespace std;
vector<int>edge[30005];
int ara[100005];
bool vis[100005];
void dfs(int node)
{
    if(vis[node]==1) return;
    else vis[node]=1;
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        dfs(x);
    }
}
int main()
{
    int i,j,n,x,y,z;
    cin>>n>>x;
    for(i=0;i<n-1;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<=n-1;i++)
    {
        edge[i].push_back(i+ara[i-1]);
    }
    dfs(1);
    if(vis[x]==1) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
