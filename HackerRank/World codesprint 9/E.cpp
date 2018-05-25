#include<bits/stdc++.h>
#define LL long long
#define de cout<<"debug"
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
map<LL,int>mp[200005];
vector<LL>edge[200005];
bool vis[200005];
LL dis,calc[12],ara[100005];
void dfs(LL node,LL pre,LL val)
{
    int x;
    if(vis[node]==1) return;
    else vis[node]=1;
    if(ara[val]!=1 && val!=0)
    {
        x=val%10;
        calc[x]++;
        ara[val]=1;
        cout<<val<<endl;
    }
    for(int i=0;i<edge[node].size();i++)
    {
        int newnode=edge[node][i];
        if(newnode==pre) continue;
        dfs(newnode,node,val+mp[node][newnode]);
    }
}
int main()
{
    LL i,j,n,m,x,y,z;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        edge[x].push_back(y);
        edge[y].push_back(x);
        mp[x][y]=z;
        mp[y][x]=1000-z;
        ara[mp[x][y]]=1;
        ara[mp[y][x]]=1;
        j=z%10;
        calc[j]++;
        j=(1000-z)%10;
        calc[j]++;
        cout<<z<<" "<<(1000-z)<<endl;
    }
    cout<<endl;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i,-1,0);
        }
    }
    memset(vis,0,sizeof(vis));
    for(i=n;i>=1;i--)
    {
        if(vis[i]==0)
        {
            dfs(i,-1,0);
        }
    }
    for(i=0;i<10;i++) cout<<calc[i]<<"\n";
}
