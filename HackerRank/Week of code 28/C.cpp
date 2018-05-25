#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL cnt,sum;
bool vis[100005];
vector<LL>edge[100005];
pair<LL,LL>pr[100005];
void dfs(LL node,LL pre)
{
    if(vis[node]==1)
    {
        return;
    }
    else
    {
        vis[node]=1;
    }
    //cout<<sum<<endl;
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        if(x==pre) continue;
        dfs(x,node);
    }
}
int main()
{
    LL i,j,n,m,x,y,z,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=cnt=0;
        memset(vis,0,sizeof(vis));
        for(i=0;i<100001;i++) edge[i].clear();
        cin>>n>>m;
        for(j=0;j<m;j++)
        {
            cin>>x>>y;
            pr[j].first=x;
            pr[j].second=y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        bool mark[100005];
        LL sum2=0;
        for(j=1;j<=n;j++)
        {
            sum=0;
            if(vis[j]==0)
            {
                dfs(j,-1);
                memset(mark,0,sizeof(mark));
                for(int k=0;k<m;k++)
                {
                    int p=pr[k].first;
                    int q=pr[k].second;
                    if(vis[pr[k].first]==1 && vis[pr[k].second]==1)
                    {
                        if(mark[x]==0 && mark[y]==0)
                        {
                            cnt+=2;
                            sum+=sum2+(cnt*(cnt-1))+2;
                        }
                        else if(mark[x]==1 && mark[y]==1)
                        {
                            sum+=sum2+(cnt*(cnt-1));
                        }
                        else if(mark[x]==1 || mark[y]==1)
                        {
                            cnt++;
                            sum+=sum2+(cnt*(cnt-1));
                        }
                        mark[x]=1;
                        mark[y]=1;
                    }
                }
                sum2+=sum;
            }
        }
        cout<<sum<<"\n";
    }
}
