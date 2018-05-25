#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100005],red,blue;
int vis[100005],tag;
void dfs(int node,int pre)
{
    if(vis[node]==0)
    {
        if(vis[pre]==1)
        {
            vis[node]=2;
            blue.push_back(node);
        }
        else if(vis[pre]==2)
        {
            vis[node]=1;
            red.push_back(node);
        }
        else
        {
            vis[node]=1;
            red.push_back(node);
        }
    }
    else if(vis[node]!=0)
    {
        if(vis[node]==vis[pre])
        {
            tag=1;
            return;
        }
        else return;
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
    int i,j,m,n,x,y,p,q;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i,0);
        }
    }
    if(tag) cout<<-1<<"\n";
    else
    {
       p=red.size();
       q=blue.size();
       if(p>q)
       {
           cout<<q<<"\n";
           for(i=0;i<q;i++)
           {
               cout<<blue[i]<<" ";
           }
           cout<<"\n"<<p<<"\n";
           for(i=0;i<p;i++)
           {
               cout<<red[i]<<" ";
           }
           cout<<"\n";
       }
       else
       {
           cout<<p<<"\n";
           for(i=0;i<p;i++)
           {
               cout<<red[i]<<" ";
           }
           cout<<"\n"<<q<<"\n";
           for(i=0;i<q;i++)
           {
               cout<<blue[i]<<" ";
           }
           cout<<"\n";
       }
    }
}
