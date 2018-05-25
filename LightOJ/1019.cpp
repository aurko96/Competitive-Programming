#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct point{
    LL name;
    LL val;
    bool operator<(const point &a)const{
        return a.val<val;
    }
};
priority_queue<point>pq;
vector<pair<LL,LL> >edge[100005];
LL dis[100005];

void djk(point node)
{
    LL now=node.name;
    for(LL i=0;i<edge[now].size();i++)
    {
        LL x=edge[now][i].first;
        if(dis[now]+edge[now][i].second<dis[x])
        {
            dis[x]=dis[now]+edge[now][i].second;
            point get;
            get.name=x;
            get.val=dis[x];
            pq.push(get);
        }
    }
}
int main()
{
    LL i,j,n,k,m,s,y,z,t,p;
    LL x;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        LL u,v;
        LL w;
        scanf("%lld %lld",&n,&k);
        for(j=0;j<=n;j++) edge[j].clear();
        while(!pq.empty()) pq.pop();
        for(j=0;j<k;j++)
        {
            scanf("%lld %lld %lld",&u,&v,&w);
            edge[u].push_back(make_pair(v,w));
            edge[v].push_back(make_pair(u,w));
        }
        //cout<<"hello "<<edge[s].size()<<endl;
        for(j=0;j<=n;j++) dis[j]=1e18;
        dis[1]=0;
        point get;
        get.name=1;
        get.val=0;
        pq.push(get);
        while(!pq.empty())
        {
            point temp=pq.top();
            if(temp.name==n) break;
            pq.pop();
            djk(temp);
        }
        if(dis[n]==1e18) printf("Case %lld: Impossible\n",i);
        else printf("Case %lld: %lld",i,dis[n]);
    }
}


