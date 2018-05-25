#include<bits/stdc++.h>
using namespace std;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int n,m,cycle;
bool visit[60][60];
string dots[60];
void dfs(int r,int c,char ch,int px,int py)
{
    if(cycle) return;
    if(r<0 || c<0 || r>=n || c>=m) return;
    if(dots[r][c]!=ch) return;
    if(visit[r][c]==1)
    {
        cycle=1;
        return;
    }
    visit[r][c]=1;
    for(int i=0;i<4;i++)
    {
        if(px==r+dx[i] && py==c+dy[i]) continue;
        dfs(r+dx[i],c+dy[i],ch,r,c);
    }
}
int main()
{
    int i,j,x,y,count=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>dots[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(visit[i][j]==0)
            {
                dfs(i,j,dots[i][j],-1,-1);
                if(cycle)
                {
                    count=1;
                    break;
                }
            }
        }
        if(count) break;
    }
    if(count) cout<<"Yes"<<'\n';
    else cout<<"No"<<'\n';
}
