#include<bits/stdc++.h>
using namespace std;
int fx[]={0,0,1,-1};
int fy[]={1,-1,0,0};
int n,m;
//int flag;
int z=-1;
int flag=-1;
bool vis[1005][1005];
string str[1005];
int bfs(int row,int col,int flag)
{
    queue<pair<int,int> >qq;
    pair<int,int>p,pp;
    p.first=row;
    p.second=col;
    qq.push(p);
    while(!qq.empty())
    {
        pp=qq.front();
        cout<<pp.first<<" "<<pp.second<<endl;
        qq.pop();
        int x,y;
        for(int i=0;i<4;i++)
        {
            x=pp.first+fx[i];
            y=pp.second+fy[i];

            if(x>=0 && x<n && y>0 && y<m && vis[x][y]==0 && str[x][y]=='.')
            {
                if(z!=i)
                {
                    z=i;
                    flag++;
                }
                cout<<x<<" "<<y<<endl;
                vis[x][y]=1;
                qq.push(pp);

            }
        }
    }
}
int main()
{
    int i,j,x,y;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>str[i][j];
            if(str[i][j]=='S')
            {
                x=i;
                y=j;
            }
        }
    }
    bfs(x,y,0);
    if(flag<=2 && flag!=-1) cout<<"YES\n";
    else cout<<"NO\n";
}
