#include<bits/stdc++.h>
using namespace std;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
int n,m,cycle;
bool visit[101][101];
string chess[101];
void dfs(int r,int c,char ch,int px,int py)
{
    if(r<0 || c<0 || r>=n || c>=m) return;
    if(chess[r][c]=='-') return;
    if(visit[r][c]==1) return;
    if(px<0 && py<0)
    {
        chess[r][c]=ch;
    }
    else
    {
        if(chess[px][py]=='B')
        {
            ch='W';
            chess[r][c]=ch;
        }
        else if(chess[px][py]=='W')
        {
            ch='B';
            chess[r][c]=ch;
        }
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
    int i,j,x,y;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>chess[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(visit[i][j]==0 && chess[i][j]=='.')
            {
                dfs(i,j,'B',-1,-1);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<chess[i][j];
        }
        cout<<endl;
    }

}

