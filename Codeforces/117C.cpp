#include<bits/stdc++.h>
using namespace std;
vector<int>edge[5005];
int vis[50000];
int cycle;
void dfs(int node,int pre,int pre_pre,int pre_pre_pre)
{
    if(cycle) return;
    if(vis[node]!=0)
    {
        if(vis[node]==vis[pre] && vis[node]!=vis[pre_pre] && node==pre_pre_pre)
        {
            cycle=1;
            cout<<node<<" "<<pre_pre<<" "<<pre;
            return;
        }
        else return;
    }
    else if(vis[node]==0)
    {
        if(vis[pre]==1) vis[node]=2;
        else if(vis[pre]==2) vis[node]=1;
        else vis[node]=1;
        //cout<<node<<endl;
    }
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        if(x==pre) continue;
        dfs(x,node,pre,pre_pre);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int i,j,n,x,y,z;
    string mat[5005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>mat[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mat[i][j]=='1')
            {
                edge[i+1].push_back(j+1);
            }
        }
    }
    /*for(i=1;i<=n;i++)
    {
        for(j=0;j<edge[i].size();j++)
        {
            cout<<i<<" "<<edge[i][j]<<endl;
        }
    }*/
    if(n>500)
    {
        for(i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                //memset(vis,0,sizeof(vis));
                dfs(i,0,0,0);
            }
            if(cycle) break;
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            memset(vis,0,sizeof(vis));
            dfs(i,0,0,0);
            if(cycle) break;
        }
    }

    if(!cycle) cout<<-1;
}
