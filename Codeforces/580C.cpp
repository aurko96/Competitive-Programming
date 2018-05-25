#include<bits/stdc++.h>
using namespace std;
bool vis[100005];
int cats[100001];
int n,m,restaurant;
vector<int>edge[100005];
void dfs(int node,int cnt)
{
    if(vis[node]==1) return;
    else vis[node]=1;
    if(cats[node-1]==1) cnt++;
    else cnt=0;
    if(cnt>m) return;
    int flag=0;
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        if(vis[x]==1) continue;
        dfs(x,cnt);
        flag++;
    }
    if(flag==0) restaurant++;
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int i,j,k,x,y,z;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>cats[i];
    }
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    dfs(1,0);

    cout<<restaurant<<"\n";
}
