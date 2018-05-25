#include<bits/stdc++.h>
#define LL long long
using namespace std;
struct edge
{
    int u,v,w;
    bool operator < ( const edge& p ) const
    {
        return w < p.w;
    }
};
int pr[100005];
vector<edge>e;
vector<pair<int,int> >edge2[100005];
pair<int,int>val[100005];
int find(int r)
{
    return (pr[r]==r) ? r : find(pr[r]);
}

int mst(int n)
{
    sort(e.begin(),e.end());
    for(int i=0;i<=n;i++)pr[i]=i;

    int count=0;
    int s=0;

    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);

        if(u!=v)
        {
            pr[u]=v;
            count++;
            s+=e[i].w;
            val[v].first=u;
            val[v].second=e[i].w;
            edge2[e[i].u].push_back(make_pair(e[i].v,e[i].w));
            edge2[e[i].v].push_back(make_pair(e[i].u,e[i].w));
            cout<<"u = "<<e[i].u<<" v = "<<e[i].v<<" w = "<<e[i].w<<" ara = "<<val[v].second<<endl;
            if(count==n-1) break;
        }

    }
    return s;
}
int main()
{
    int ara[100005],ara2[100005],i,j,k,n,m,x,y,z;
    cin>>m>>n;
    for(i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        ara[i]=z;
        ara2[i]=y;
        edge get;
        get.u=x;
        get.v=y;
        get.w=z;
        e.push_back(get);
    }
    int ans=mst(m);
    cout<<ans<<endl;
    for(i=0;i<n;i++)
    {
        //k=(ans+ara[i])-val[ara2[i]].second;
        k=(ans+ara[i])-edge2[ara2[i]][0].second;
       // cout<<"ara = "<<val[ara2[i]].second<<endl;
        cout<<k<<endl;
    }
}
