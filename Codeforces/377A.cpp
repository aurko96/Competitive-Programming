#include<bits/stdc++.h>
using namespace std;
string maze[1000];
int x,y,z,dots,n,cell;
void dfs(int row,int col)
{
    if(cell==z) return;
    if(row<0 || row>=x || col<0 || col>=y) return;
    //cout<<cell<<endl;
    if(maze[row][col]!='.') return;
    maze[row][col]='$';
    cell++;
    dfs(row+1,col);
    dfs(row-1,col);
    dfs(row,col+1);
    dfs(row,col-1);
}
int main()
{
    int i,j,p,q;
    cin>>x>>y>>n;
    for(i=0;i<x;i++)
    {
        cin>>maze[i];
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(maze[i][j]=='.')
            {
                dots++;
                p=i;
                q=j;
            }
        }
    }
    z=dots-n;
    dfs(p,q);
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(maze[i][j]=='.') cout<<"X";
            else if(maze[i][j]=='$') cout<<".";
            else cout<<"#";
        }
        cout<<"\n";
    }
}
