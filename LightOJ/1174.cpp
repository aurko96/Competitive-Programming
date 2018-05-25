#include<bits/stdc++.h>
using namespace std;
int val[2000],dis[1000][1000];
vector<int>td[1005];
void dfs(int node,int time)
{
    int i,x;
    if(val[node]<time)
    {
        val[node]=time;
        return;
    }
    else
    {
        val[node]=time;
    }
    for(i=0;i<td[node].size();i++)
    {
        x=td[node][i];
        dfs(x,time+dis[node][x]);
    }
    return;
}
int main()
{
    int a,b,c,d,e,r,i,j,k,m,n,x,y,z,t,s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(j=0;j<=1000;j++)
        {
            td[j].clear();
        }
        for(j=0;j<1001;j++)
        {
            val[j]=1000000000;
        }
        cin>>n>>r;
        for(j=0;j<r;j++)
        {
            cin>>x>>y;
            dis[x][y]=dis[y][x]=1;
            td[x].push_back(y);
            td[y].push_back(x);
        }
        cin>>s>>e;
        dfs(s,0);
        cout<<"Case "<<i<<": "<<val[e]<<'\n';
    }
}
