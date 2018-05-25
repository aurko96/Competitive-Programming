#include<bits/stdc++.h>
using namespace std;
int pr[100],dsu[100];
int find_dsu(int r)
{
    return (pr[r]==r)? r:find_dsu(pr[r]);
}
int main()
{
    int i,j,n,m,x,y,z=0,u,v;
    cin>>m>>n;
    for(i=1;i<=m;i++)
    {
        pr[i]=i;
        dsu[i]=1;
    }
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        u=find_dsu(x);
        v=find_dsu(y);
        if(u!=v)
        {
            pr[v]=u;
            dsu[u]+=dsu[v];
        }
    }
    for(i=1;i<=m;i++)
    {
        if(find_dsu(i)==i) z+=dsu[i]-1;
    }
    long long ans=pow(2,z);
    cout<<ans<<"\n";
}
