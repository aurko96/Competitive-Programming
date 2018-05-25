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
int pr[105];
int find(int r)
{
    return (pr[r]==r) ? r : find(pr[r]);
}
int mst(int n)
{
    sort(e.begin(),e.end());
    for(int i=0; i<=n; i++) pr[i]=i;
    int count=0,s=0;
    for(int i=0; i<(int)e.size(); i++)
    {
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
    if(count==n-1) return s;
    else return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,j,k,n,x,y,z,t,ara[52][52];
    string str1,str2;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        edge get;
        e.clear();
        mp.clear();
        memset(pr,0,sizeof(pr));
        cin>>n;
        int sum=0;
        for(j=0,k=0; j<n; j++)
        {
            cin>>str1>>str2>>x;
            if(mp[str1]==0) mp[str1]=++k;
            if(mp[str2]==0) mp[str2]=++k;
            edge get;
            get.u=mp[str1];
            get.v=mp[str2];
            get.w=x;
            e.push_back(get);
        }
        int ans1=mst(k);
        if(ans1==-1) cout<<"Case "<<i<<": Impossible\n";
        else cout<<"Case "<<i<<": "<<ans1<<"\n";
    }
}


