#include<bits/stdc++.h>
using namespace std;
vector<int>v[1005];
int dis[1001],val[1000][1000];
void dfs(int s,int w)
{
    if(dis[s]<w)
    {
       //dis[s]=w;
        return;
    }
    else
    {
        dis[s]=w;
    }
    for(int i=0;i<v[s].size();i++)
    {
        int x=v[s][i];
        dfs(x,w+val[s][x]);
    }
    return;
}
int main()
{
    int a,b,c,d,e,i,j,n,s,x,y,z,t,w;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<=1000;j++)
        {
            v[j].clear();
        }
        for(j=0;j<1001;j++)
        {
            dis[j]=1000000000;
        }
        scanf("%d %d",&n,&e);
        for(j=0;j<e;j++)
        {
            scanf("%d %d",&x,&y);
            val[x][y]=val[y][x]=1;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        scanf("%d",&s);
        dfs(s,0);
        for(j=0;j<=n;j++)
        {
            if(j==s)
            {
                continue;
            }
            if(dis[j]==1000000000)
            {
                printf("-1 ");
            }
            else
            {
                printf("%d ",dis[j]);
            }
        }
        printf("\n");
    }
}
