#include<bits/stdc++.h>
#define LL long long
using namespace std;
vector<LL>edge[150005];
LL vis[150005];
LL cycle,cnt,z,flag;
void dfs(LL node,LL pre,LL prepre,LL preprepre)
{
    if(vis[node]!=0)
    {
        if(vis[node]==vis[pre] && vis[node]!=vis[prepre] && node==preprepre)
        {
            cycle++;
            return;
        }
        else return;
    }
    else if(vis[node]==0)
    {
        if(vis[pre]==1) vis[node]=2;
        else if(vis[pre]==2) vis[node]=1;
        else vis[node]=1;
        cnt++;
        //cout<<node<<endl;
    }
    for(LL i=0;i<edge[node].size();i++)
    {
        LL x=edge[node][i];
        if(x==pre) continue;
        dfs(x,node,pre,prepre);
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
            dfs(i,-1,-1,-1);
            z=cnt-3;
            z++;
            cout<<"hello = "<<cycle<<" "<<cnt<<endl;
            if(cycle!=z && cnt!=1)
            {
                flag=1;
                //break;
            }
            else
            {
                cnt=0;
                cycle=0;
            }
        }
    }
    if(flag) cout<<"NO\n";
    else cout<<"YES\n";
}
