#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100005];
bool vis[100005];
int cycle;    //having a cycle means all the cities within the cycle
             // can be reached by unidirectional roads
void dfs(int node,int pre)
{
    if(cycle) return;
    if(vis[node]==1)
    {
        cycle=1;
        return;
    }
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
    int i,n,m,x,y,cnt=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i,-1);
            if(cycle==0) cnt++;
            else cycle=0;
        }
    }
    cout<<cnt<<"\n";
}
