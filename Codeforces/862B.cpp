// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
vector<int>edge[100005],blue,red;
int vis[100005];

void dfs(int node,int pre)
{
    if(vis[node]==0)
    {
        if(vis[pre]==1)
        {
            vis[node]=2;
            //cout<<"bb  "<<node<<" "<<pre<<" "<<vis[node]<<" "<<vis[pre]<<endl;
            blue.push_back(node);
        }
        else if(vis[pre]==2)
        {
            vis[node]=1;
           // cout<<"rr  "<<node<<" "<<pre<<" "<<vis[node]<<" "<<vis[pre]<<endl;
            red.push_back(node);
        }
        else
        {
            vis[node]=1;
            red.push_back(node);
        }
    }
    else return;
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i];
        if(x==pre) continue;
        //cout<<vis[x]<<" "<<vis[node]<<endl;
        dfs(x,node);
    }
}
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
    dfs(1,-1);
    LL sum=0;
//    for(int i=0;i<red.size();i++) cout<<red[i]<<" ";
//    cout<<endl;
//    for(int i=0;i<blue.size();i++) cout<<blue[i]<<" ";
//    cout<<endl;
    for(int i=0;i<red.size();i++)
    {
        int a,b;
        a=edge[red[i]].size();
        b=blue.size();
        //cout<<a<<" "<<b<<endl;
        sum+=abs(a-b);
    }
    cout<<sum<<"\n";
}
