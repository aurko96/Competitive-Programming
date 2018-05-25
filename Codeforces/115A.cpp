#include<bits/stdc++.h>
using namespace std;
vector<int>edge[10000];
bool vis[50000];
int counts=1,a[5000];
void dfs(int node,int level)
{
    if(vis[node]==1) return;
    else vis[node]=1;
    counts=max(counts,level);
    //cout<<node<<" "<<counts<<endl;
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        dfs(x,level+1);
    }
}
int main()
{
    int i,j,k,n,x,y,z;
    cin>>n;
    for(i=1,j=0,k=0;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==-1) continue;
        else edge[a[i]].push_back(i);
    }
   /*for(i=1;i<=n;i++)
    {
        for(j=0;j<edge[a[i]].size();j++)
        {
            cout<<"edge1 = "<<edge[a[i]][j]<<" ";
        }
        for(j=0;j<edge[i].size();j++)
        {
            cout<<"edge2 = "<<edge[i][j]<<" ";
        }
        cout<<endl;
    }*/
    for(i=1;i<=n;i++)
    {
        memset(vis,0,sizeof(vis));
        dfs(i,1);
    }
    cout<<counts<<"\n";
}
