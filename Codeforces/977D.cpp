#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
map<LL,LL> vis;
vector<LL>edge;
map<LL,LL>mp;
void dfs(LL node)
{
    if(vis[node]) return;
    if(mp[node]==0) return;
    if(mp[node]>0 && vis[node]==0)
    {
        edge.push_back(node);
        vis[node]=1;
    }
    if(node%3==0) dfs(node/3);
    dfs(node*2);
    return;
}

int main()
{
    int n;
    cin>>n;
    LL ara[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;

    }

    for(int i=0;i<n;i++)
    {
        if(vis[ara[i]]==0)
        {
            dfs(ara[i]);
        }
        if(edge.size()!=n)
        {
            vis.clear();
            edge.clear();
        }
        else break;

    }
    for(int i=0;i<edge.size();i++)
    {
        cout<<edge[i]<<" ";
    }
    cout<<"\n";
}
