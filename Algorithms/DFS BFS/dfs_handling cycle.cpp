#include<bits/stdc++.h>
using namespace std;
bool cycle,flag,vis[2000];
int dis[2000],n,m;
vector<int>edge[1005];
void dfs(int node,int pre)
{
    if(vis[node]==1)
    {
        cycle=1;
        return;
    }
    vis[node]=1;
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        if(x==pre) continue;
        dfs(x,node);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int i,j,x,y,z;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            return 0;
        }
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        dfs(0,-1);
       /* for(i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                flag=1;
            }
        }*/
        //cout<<cycle<<" "<<flag<<endl;
        if(cycle==1)
        {
            cout<<"NOT BICOLORABLE."<<"\n";
        }
        else
        {
            cout<<"BICOLORABLE."<<"\n";
        }
    }

}
