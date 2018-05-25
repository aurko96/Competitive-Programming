#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
vector<int>edge[1000];
bool vis[1000];
int chain;
void dfs(int node,int level)
{
    if(vis[node]==1) return;
    else vis[node]=1;
    chain=max(chain,level);
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        dfs(x,level+1);
    }
}
int main()
{
    int i,j,n,x,y,z,count=0;
    cin>>n;
    string from,to,rep;
    for(i=0;i<n;i++)
    {
       cin>>to>>rep>>from;
       for(j=0;j<to.size();j++) to[j]=tolower(to[j]);
       for(j=0;j<from.size();j++) from[j]=tolower(from[j]);
       if(mp[to]==0) mp[to]=++count;
       if(mp[from]==0) mp[from]=++count;
       edge[mp[from]].push_back(mp[to]);
    }
    dfs(mp["polycarp"],1);
    cout<<chain<<"\n";
}
