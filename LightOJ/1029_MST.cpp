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
vector<edge>e;
int pr[105];
int find(int r)
{
    return (pr[r]==r) ? r : find(pr[r]);
}
int mst(int n)
{
    sort(e.begin(),e.end());
    for(int i=0;i<=n;i++) pr[i]=i;
    int count=0,s=0;
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            pr[u]=v;
            count++;
            s+=e[i].w;
            if(count==n) break;
        }
    }
    return s;
}
int revmst(int n)
{
    reverse(e.begin(),e.end());
    for(int i=0;i<=n;i++) pr[i]=i;
    int count=0,s=0;
    for(int i=0;i<(int)e.size();i++)
    {
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            pr[u]=v;
            count++;
            s+=e[i].w;
            if(count==n) break;
        }
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,j,n,x,y,z,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        e.clear();
        memset(pr,0,sizeof(pr));
        cin>>n;
        while(1)
        {
            cin>>x>>y>>z;
            if(x==0 && y==0 && z==0) break;
            edge get;
            get.u=x;
            get.v=y;
            get.w=z;
            e.push_back(get);
        }
        int ans1=mst(n);
        int ans2=revmst(n);
        int result=ans1+ans2;
        if(result%2==0) cout<<"Case "<<i<<": "<<result/2<<"\n";
        else cout<<"Case "<<i<<": "<<result<<"/2\n";
    }
}
