#include<bits/stdc++.h>
using namespace std;
char grid[505][505];
int n,m;
bool flag,vis[505][505];
int s1,s2,e1,e2;
void dfs(int x,int y)
{
    if(flag) return;
    if(x==e1-1 && y==e2-1)
    {
        if(grid[x][y]=='.')
        {
            flag=1;
            return;
        }
        else if(grid[x][y]=='*' && vis[x][y]==1)
        {
            grid[x][y]='.';
            flag=1;
            return;
        }
    }
    if(x<0 || x>=n || y<0 || y>=m) return;
    if(grid[x][y]=='*' && vis[x][y]==1)
    {
        grid[x][y]='.';
    }
    else if(grid[x][y]=='*')
    {
        vis[x][y]=1;
        return;
    }
    else if(vis[x][y]==1) return;
    else vis[x][y]=1;
    dfs(x+1,y);
    dfs(x,y+1);
    dfs(x-1,y);
    dfs(x,y-1);
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        memset(vis,0,sizeof(vis));
        flag=0;
        cin>>n>>m;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                cin>>grid[j][k];
            }
        }
        cin>>s1>>s2>>e1>>e2;
        dfs(s1-1,s2-1);
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";

//        cout<<endl<<endl;
//        for(int j=0;j<n;j++)
//        {
//            for(int k=0;k<m;k++)
//            {
//                cout<<grid[j][k];
//            }
//            cout<<endl;
//        }
    }
}
