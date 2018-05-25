#include<bits/stdc++.h>
#define debug cout<<"d"
using namespace std;
bool cycle,flag;
int vis[2000];
int dis[2000],n,m;
vector<int>edge[1005];
void dfs(int node,int pre)
{
    if(vis[node]==1 || vis[node]==2)
    {
        if(vis[node]==vis[pre])
        {
            flag=1;
            return;
        }
        else
        {
            return;
        }
    }
    else if(pre>=0)
    {
        if(vis[pre]==1)
        {
            vis[node]=2;
        }
        else if(vis[pre]==2)
        {
            vis[node]=1;
        }
    }
    else
    {
        vis[node]=1;
        //debug<<1;
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
    int i,j,x,y,z;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            return 0;
        }
        for(i=0;i<n;i++)
        {
            edge[i].clear();
        }
        memset(vis,0,sizeof(vis));
        flag=0;
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d %d",&x,&y);
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        dfs(0,-1);
        if(flag==1)
        {
            printf("NOT BICOLORABLE.\n");
        }
        else
        {
            printf("BICOLORABLE.\n");
        }
    }

}

