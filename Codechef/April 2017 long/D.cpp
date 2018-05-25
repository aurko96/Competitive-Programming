#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct point{
    LL name,val;
    bool operator<(const point &a)const{
        return a.val<val;
    }
};
priority_queue<point>pq;
vector<LL>edge[100005];
map<LL,LL>cost[100005];
LL dis[100005];

inline void djk(point node)
{
    LL now=node.name;
    for(LL i=0;i<edge[now].size();i++)
    {
        LL x=edge[now][i];
        if(dis[now]+cost[now][x]<dis[x])
        {
            dis[x]=dis[now]+cost[now][x];
            point get;
            get.name=x;
            get.val=dis[x];
            pq.push(get);
        }
    }
}
int main()
{
    LL i,j,n,k,x,m,s,y,z,t,p;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        LL u,v,w;
        scanf("%lld %lld %lld %lld %lld",&n,&k,&x,&m,&s);
        for(j=0;j<=n;j++)
        {
            edge[j].clear();
            cost[j].clear();
        }
        while(!pq.empty()) pq.pop();
        for(j=1;j<=k;j++)
        {
            for(p=j+1;p<=k;p++)
            {
                edge[j].push_back(p);
                edge[p].push_back(j);
                cost[j][p]=cost[p][j]=x;
            }
        }
        for(j=0;j<m;j++)
        {
            scanf("%lld %lld %lld",&u,&v,&w);
            edge[u].push_back(v);
            edge[v].push_back(u);
            cost[u][v]=cost[v][u]=w;
        }
        for(j=0;j<=n;j++) dis[j]=1e14;
        dis[s]=0;
        point get;
        get.name=s;
        get.val=0;
        pq.push(get);
        while(!pq.empty())
        {
            point temp=pq.top();
            pq.pop();
            djk(temp);
        }
        for(j=1;j<=n;j++) printf("%lld ",dis[j]);
        printf("\n");
    }
}
