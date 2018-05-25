#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100005];
bool vis[100005];
int dis[100005];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for(int i=0;i<=n;i++) dis[i]=1e9;
    queue<int>qq;
    dis[1]=0;
    qq.push(1);
    while(!qq.empty())
    {
        int node=qq.front();
        qq.pop();
        for(int i=0;i<edge[node].size();i++)
        {
            if(vis[edge[node][i]]==0)
            {
                if(dis[node]+1<dis[edge[node][i]])
                {
                    qq.push(edge[node][i]);
                    vis[edge[node][i]]=1;
                    dis[edge[node][i]]=dis[node]+1;
                }
            }
        }
    }
    double cnt=0,sum=0,prob=1.00;
    for(int i=1;i<=n;i++)
    {
        if(edge[i].size()==1)
        {
            prob=((double)prob/edge[i].size());
            sum+=((double)prob*dis[i]);
            cnt++;
        }
        else prob=((double)prob/(edge[i].size()-1));
    }
    double ans;
    ans=(double)sum/cnt;
    cout<<fixed<<setprecision(6)<<ans<<"\n";
}
