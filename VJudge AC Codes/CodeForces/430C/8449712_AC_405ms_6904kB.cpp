#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100005],pick;
bool vis[100005],init[100005],goal[100005];
void dfs(int node,int odd,int even,int level)
{
    if(vis[node]==1) return;
    else vis[node]=1;
    if(level%2==0 && even==1) goal[node]=1-goal[node];
    else if(level%2!=0 && odd==1) goal[node]=1-goal[node];
    if(init[node]!=goal[node])
    {
       if(level%2==0) even=1-even;
       else odd=1-odd;
       pick.push_back(node);
    }
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        dfs(x,odd,even,level+1);
    }
}
int main()
{
    int i,j,n,x,y,z;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        cin>>init[i];
    }
    for(i=1;i<=n;i++)
    {
        cin>>goal[i];
    }
    dfs(1,0,0,0);
    cout<<pick.size()<<"\n";
    for(i=0;i<pick.size();i++)
    {
        cout<<pick[i]<<"\n";
    }
}