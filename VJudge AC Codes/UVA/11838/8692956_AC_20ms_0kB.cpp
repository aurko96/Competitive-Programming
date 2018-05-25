#include<bits/stdc++.h>
#define LL long long
using namespace std;
vector<int>edge[300005],revedge[300005];
stack<int>st;
LL cnt;
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
    else vis[node]=1;
    for(int i=0;i<revedge[node].size();i++)
    {
        int x=revedge[node][i];
        dfs(x);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int i,j,n,m,x,y,z;
    while(cin>>n>>m)
    {
        cnt=0;
        if(n==0 && m==0) break;
        memset(vis,0,sizeof(vis));
        while(!st.empty()) st.pop();
        for(i=0;i<=2000;i++)
        {
            edge[i].clear();
            revedge[i].clear();
        }
        for(i=0;i<m;i++)
        {
            cin>>x>>y>>z;
            if(z==1)
            {
                edge[x].push_back(y);
                revedge[y].push_back(x);
            }
            else if(z==2)
            {
                edge[x].push_back(y);
                edge[y].push_back(x);
                revedge[x].push_back(y);
                revedge[y].push_back(x);
            }
        }
        for(i=1;i<=n;i++) if(vis[i]==0) topsort(i);
        memset(vis,0,sizeof(vis));
        while(!st.empty())
        {
            int node=st.top();
            st.pop();
            if(vis[node]==1) continue;
            cnt++;
            if(cnt>1) break;
            dfs(node);
        }
        if(cnt>1) cout<<0<<"\n";
        else if(cnt==1) cout<<1<<"\n";
    }

}


