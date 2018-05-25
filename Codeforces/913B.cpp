#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
vector<int>edge[10005];
bool vis[10005];
bool flag=0;
int dfs(int node,int pre)
{
    int child=0;
    if(vis[node]==1) return 0;
    else vis[node]=1;

    for(int i=0; i<edge[node].size(); i++)
    {
        int x=edge[node][i];
        if(x==pre) continue;
        child+=dfs(x,node);
    }

    if(edge[node].size()==0) return 1;
    if(child<3) flag=1;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<n; i++)
    {
        int x;
        cin>>x;
        edge[x].push_back(i+1);
    }
    dfs(1,-1);

    if(flag) cout<<"NO\n";
    else cout<<"YES\n";
}
