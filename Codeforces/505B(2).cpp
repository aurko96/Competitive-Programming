#include<bits/stdc++.h>
#define LL long long
using namespace std;
vector<pair<int,int>>edge[10005];
bool vis[10005];
void dfs(int node,int pre,int colour)
{
    if(vis[node]==1) return;
    else vis[node]=1;
    for(int i=0;i<edge[colour].size();i++)
    {
        int x=edge[colour][i].first;
        int y=edge[colour][i].second;
        int newnode;
        if(x==node) newnode=y;
        else newnode=x;
        if(newnode==pre) continue;
        //cout<<"p = "<<node<<" "<<newnode<<"  "<<colour<<endl;
        dfs(newnode,node,colour);
    }
}
int main()
{
    int i,j,k,m,n,x,y,z,mx=0;
    cin>>n>>m;
    vector<int>vect;
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        edge[z].push_back(make_pair(x,y));
        edge[z].push_back(make_pair(y,x));
        mx=max(mx,z);
    }
    int t,p,q;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>p>>q;
        memset(vis,0,sizeof(vis));
        int r=0;
        for(i=1;i<=mx;i++)
        {
            //cout<<"mx = "<<mx<<endl;
            memset(vis,0,sizeof(vis));
            if(vis[p]==0 && vis[q]==0)
            {
                dfs(edge[i][0].first,-1,i);
                if(vis[p]==1 && vis[q]==1)
                {
                    r++;
                    memset(vis,0,sizeof(vis));
                }
            }
        }
        vect.push_back(r);
    }
    for(i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<"\n";
    }

}
