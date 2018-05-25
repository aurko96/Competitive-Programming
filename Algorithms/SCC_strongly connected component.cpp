#include<bits/stdc++.h>
#define LL long long
using namespace std;
vector<int>edge[300005],revedge[300005];
stack<int>st;
LL ara[100005],mn,cnt,ways,ans;
bool vis[100005];
void topsort(int node)
{
    if(vis[node]==1) return;
    else vis[node]=1;
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        topsort(x);
    }
    st.push(node);
}

void dfs(int node)
{
    if(vis[node]==1) return;
    if(ara[node]<mn)
    {
        cnt=1;
        mn=ara[node];
    }
    else if(ara[node]==mn) cnt++;
    vis[node]=1;
    for(int i=0;i<revedge[node].size();i++)
    {
        int x=revedge[node][i];
        dfs(x);
    }
}
int main()   // ~ SCC
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int i,j,n,m,x,y,z;
    cin>>n;
    for(i=1;i<=n;i++) cin>>ara[i];
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        edge[x].push_back(y);
        revedge[y].push_back(x);
    }
    for(i=1;i<=n;i++) if(vis[i]==0) topsort(i);
    memset(vis,0,sizeof(vis));
    ans=0;
    ways=1;
    while(!st.empty())
    {
        int node=st.top();
        st.pop();
        if(vis[node]==1) continue;
        mn=1e12;
        cnt=0;
        dfs(node);
        ways=(ways*cnt)%1000000007;
        ans+=mn;
    }
    cout<<ans<<" "<<ways<<"\n";
}

