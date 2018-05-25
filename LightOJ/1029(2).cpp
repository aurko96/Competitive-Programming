#include<bits/stdc++.h>

#define mx 100
#define ll long long

using namespace std;

struct edge
{
    int u,v,w;
    bool operator < ( const edge& p ) const
    {
        return w < p.w;
    }
};
int pr[mx+5];
vector<edge>e;

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
        int u = find(e[i].u);
        int v = find(e[i].v);

        if(u!=v)
        {
            pr[u]=v;
            count++;
            s+=e[i].w;
            if(count==n-1)break;
        }

    }
    return s;
}

int revmst(int n)
{
    reverse(e.begin(),e.end());
    for(int i=0;i<=n;i++)pr[i]=i;

    int count=0;
    int s=0;
    for(int i=0;i<(int)e.size();i++)
    {
        int u = find(e[i].u);
        int v = find(e[i].v);

        if(u!=v)
        {
            pr[u]=v;
            count++;
            s+=e[i].w;
            if(count==n-1)break;
        }

    }
    return s;
}


void init()
{
    e.clear();
    for(int i=0;i<=mx;i++)pr[i]=0;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int t,cases=0;
    scanf("%d",&t);

    while(t--)
    {
        init();
        int n;
        scanf("%d",&n);
        n++;
        int a,b,val;
        int i,j;
        while(scanf("%d %d %d",&a,&b,&val))
        {
            if(a==0 && b==0 && val==0)break;
            edge get;
            get.u=a;get.v=b;get.w=val;
            e.push_back(get);
        }
        int ans1 = mst(n);
        int ans2 = revmst(n);
        int ans = ans1+ans2;

        if(ans % 2==0)
        {
            printf("Case %d: %d\n",++cases,ans/2);
        }
        else printf("Case %d: %d/2\n",++cases,ans);
    }
}
