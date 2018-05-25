#include<bits/stdc++.h>
#define LL long long
using namespace std;
vector<LL>edge[150005],vect;
LL vis[150005];
LL cycle,cnt,z,flag;
void dfs(LL node,LL pre)
{
    if(vis[node]==1)
    {
        return;
    }
    else
    {
        cnt++;
        vect.push_back(node);
        vis[node]=1;
    }
    for(LL i=0;i<edge[node].size();i++)
    {
        LL x=edge[node][i];
        if(x==pre) continue;
        dfs(x,node);
    }
}
int main()
{
    LL i,j,n,m,x,y;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i,-1);
            for(j=0;j<vect.size();j++)
            {
                if(edge[vect[j]].size()!=cnt-1)
                {
                    flag=1;
                    break;
                }
            }
            vect.clear();
            if(flag) break;
        }
        cnt=0;
    }
    if(flag) cout<<"NO\n";
    else cout<<"YES\n";
}

