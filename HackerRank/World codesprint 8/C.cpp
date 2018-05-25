// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
vector<LL>edge[100005];
bool vis[100005];
LL cost,p,q;
void dfs(LL node,LL pre)
{
    if(vis[node]==1) return;
    else
    {
        vis[node]=1;
        cost+=q;
    }
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        if(x==pre) continue;
        dfs(x,node);
    }
}
int main()
{
    FastRead
    LL i,j,n,x,y,z,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>z>>p>>q;
        cost=0;
        memset(vis,0,sizeof(vis));
        for(j=0;j<=n;j++) edge[j].clear();
        for(j=0;j<z;j++)
        {
            cin>>x>>y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        for(j=1;j<=n;j++)
        {
            if(vis[j]==0)
            {
                cost-=q;
                cost+=p;
                dfs(j,0);
            }
        }
        if((p*n)<=cost) cout<<p*n<<"\n";
        else cout<<cost<<"\n";
    }

}
