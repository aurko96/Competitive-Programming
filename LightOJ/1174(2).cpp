#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

vector<int>edge[500];
bool vis[500];

void bfs(int s,int *dis)
{
    queue<int>qq;
    memset(vis,0,sizeof(vis));
    dis[s]=0;
    qq.push(s);
    while(!qq.empty())
    {
        int node=qq.front();
        qq.pop();
        for(int i=0;i<edge[node].size();i++)
        {
            int nn=edge[node][i];
            if(vis[nn]==0)
            {
                if(dis[node]+1<dis[nn])
                {
                    dis[nn]=dis[node]+1;
                    qq.push(nn);
                    vis[nn]=1;
                }
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,e;
        cin>>n>>e;
        for(int j=0;j<=n;j++) edge[j].clear();
        for(int j=0;j<e;j++)
        {
            int x,y;
            cin>>x>>y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        int s,d;
        cin>>s>>d;
        int dis[500],dis2[500];
        for(int j=0;j<=n;j++) dis[j]=1e9;
        for(int j=0;j<=n;j++) dis2[j]=1e9;
        bfs(s,dis);
        bfs(d,dis2);
        int mx=0;
        for(int j=0;j<n;j++) mx=max(mx,dis[j]+dis2[j]);
        cout<<"Case "<<i+1<<": "<<mx<<"\n";
    }
}
