#include<bits/stdc++.h>
using namespace std;
pair<int,int>p[10005];
bool vis[10005];
int n;
void dfs(int pos)
{
    if(vis[pos]==1) return;
    else vis[pos]=1;
    for(int i=0;i<n;i++)
    {
        if(p[i].first==p[pos].first || p[i].second==p[pos].second)
        {
            dfs(i);
        }
    }
}
int main()
{
    int i,j,x,y,z,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    for(i=0;i<n;i++)
    {
        if(vis[i]==1) continue;
        dfs(i);
        count++;
    }
    cout<<count-1<<endl;
}
