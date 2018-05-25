#include<bits/stdc++.h>
#define LL long long
using namespace std;
vector<int>edge[102][10005];
bool vis[10005];
void dfs(int node,int pre,int colour)
{
    //cout<<"hello dfs"<<endl;
    if(vis[node]==1) return;
    else vis[node]=1;
    for(int i=0;i<edge[colour][node].size();i++)
    {
        int newnode=edge[colour][node][i];
        //cout<<newnode<<endl;
        if(newnode==pre) continue;
        //cout<<"p = "<<node<<" "<<newnode<<"  "<<colour<<endl;
        dfs(newnode,node,colour);
    }
}
int main()
{
    int i,j,k,m,n,x,y,z,mx=0;
    cin>>n>>m;
    vector<int>vect;
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        edge[z][x].push_back(y);
        edge[z][y].push_back(x);
        mx=max(mx,z);
    }

    int t,p,q,s;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>p>>q;
        memset(vis,0,sizeof(vis));
        int r=0;
        for(i=1;i<=mx;i++)
        {
            //cout<<"colour change"<<endl;
            memset(vis,0,sizeof(vis));
            for(j=1;j<=n;j++)
            {
                if(vis[p]==0 && vis[q]==0)
                {
                    for(s=0;s<edge[i][j].size();s++)
                    {
                        dfs(edge[i][j][s],-1,i);
                        if(vis[p]==1 && vis[q]==1)
                        {
                            r++;
                            break;
                        }
                    }
                }
                else break;

            }
        }
        vect.push_back(r);
    }
    for(i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<"\n";
    }

}
