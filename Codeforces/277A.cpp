#include<bits/stdc++.h>
using namespace std;
vector<int>edge[1000],lang[1000];
bool vis[1000];
void dfs(int node)
{
    if(vis[node]==1) return;
    else vis[node]=1;
    //cout<<node<<endl;
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        dfs(x);
    }
}
int main()
{
    int i,j,m,n,x,y,count=0,flag=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x==0) flag++;
        for(j=0;j<x;j++)
        {
            cin>>y;
            lang[y].push_back(i);
        }
    }
    for(i=1;i<=m;i++)
    {
        if(lang[i].size()==0) continue;
        for(j=0;j<lang[i].size()-1;j++)
        {
            edge[lang[i][j]].push_back(lang[i][j+1]);
            edge[lang[i][j+1]].push_back(lang[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            count++;
            dfs(i);
        }
    }
    if(flag==n) cout<<count<<"\n";
    else cout<<count-1<<"\n";
}
