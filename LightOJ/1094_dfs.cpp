#include<bits/stdc++.h>
#define LL long long
using namespace std;
vector<pair<LL,LL> >edge[30005];
LL dis[30008];
bool vis[30005];
void dfs(LL node,LL pre,LL unit)
{
    if(dis[node]>unit) dis[node]=unit;
    else return;
    for(int i=0;i<edge[node].size();i++)
    {
        int x=edge[node][i].first;
        int y=edge[node][i].second;
        if(x==pre) continue;
        dfs(x,node,unit+y);
    }
}
int main()
{
    LL i,j,n,x,y,z,t,p,q,r,s,ans;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        for(j=0;j<n;j++) edge[j].clear();
        for(j=0;j<n-1;j++)
        {
            scanf("%lld %lld %lld",&x,&y,&z);
            edge[x].push_back(make_pair(y,z));
            edge[y].push_back(make_pair(x,z));
        }
        for(j=0;j<=30005;j++) dis[j]=1000000000;
        dfs(0,-1,0);
        r=*max_element(dis,dis+n);
        for(j=0,p=0,q=0;j<n;j++)
        {
            if(p<dis[j])
            {
                p=dis[j];
                q=j;
            }
        }
        for(j=0;j<=30005;j++) dis[j]=1000000000;
        dfs(q,-1,0);
        s=*max_element(dis,dis+n);
        ans=max(r,s);
        printf("Case %lld: %lld\n",i,ans);
    }
}
