#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct point{
    int name;
    LL val;
    bool operator<(const point &a)const{
        return a.val<val;
    }
};
priority_queue<point>pq;
vector<pair<int,LL> >edge[100005];
LL dis[100005];

void djk(point node)
{
    int now=node.name;
    for(int i=0;i<edge[now].size();i++)
    {
        int x=edge[now][i].first;
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
    int i,j,n,k,m,s,y,z,t,p;
    LL x;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int u,v;
        LL w;
        scanf("%d %d %lld %d %d",&n,&k,&x,&m,&s);
        for(j=0;j<=n;j++) edge[j].clear();
        while(!pq.empty()) pq.pop();
        for(j=1;j<=k;j++)
        {
            edge[0].push_back(make_pair(j,x));
            edge[j].push_back(make_pair(0,0));
        }
        for(j=0;j<m;j++)
        {
            scanf("%d %d %lld",&u,&v,&w);
            edge[u].push_back(make_pair(v,w));
            edge[v].push_back(make_pair(u,w));
        }
        //cout<<"hello "<<edge[s].size()<<endl;
        for(j=0;j<=n;j++) dis[j]=1e18;
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

