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
map<string,int>mp;
vector<edge>e;
int pr[10005];
int sum=0;
int find(int r)
{
    return (pr[r]==r) ? r : find(pr[r]);
}
int mst(int n,int p)
{
    sort(e.begin(),e.end());
    for(int i=0; i<=n; i++) pr[i]=i;
    int count=0,s=0;
    for(int i=0; i<(int)e.size(); i++)
    {
        if(e[i].w>=p)break;
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v)
        {
            pr[u]=v;
            count++;
            s+=e[i].w;
            if(count==n-1) break;
        }
    }
    //cout<<" cnt "<<count<<endl;
    sum=n-count;
    return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,j,k,n,m,x,y,z,t,p;
    string str1,str2;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        sum=0;
        edge get;
        e.clear();
        memset(pr,0,sizeof(pr));
        cin>>n>>m>>p;
        for(j=0; j<m; j++)
        {
            cin>>x>>y>>z;
            edge get;
            get.u=x;
            get.v=y;
            get.w=z;
            e.push_back(get);
        }
        int ans1=mst(n,p);
        cout<<"Case "<<i<<": "<<ans1+(sum*p)<<" "<<sum<<"\n";
    }
}



