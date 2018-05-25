#include<bits/stdc++.h>
using namespace std;
int ara[1005][1005],n,m;
int tag;
void dfs1(int row,int col)
{
    if(row<0 || row>=n || col<0 || col>=m) return;
    if(ara[row][col]==0)
    {
        //cout<<row<<" "<<col<<endl;
        tag++;
    }
    else return;
    dfs1(row+1,col);
}
void dfs2(int row,int col)
{
    if(row<0 || row>=n || col<0 || col>=m) return;
    if(ara[row][col]==0)
    {
        //cout<<row<<" "<<col<<endl;
        tag++;
    }
    else return;
    dfs2(row-1,col);
}
void dfs3(int row,int col)
{
    if(row<0 || row>=n || col<0 || col>=m) return;
    if(ara[row][col]==0)
    {
        //cout<<row<<" "<<col<<endl;
        tag++;
    }
    else return;
    dfs3(row,col+1);
}
void dfs4(int row,int col)
{
    if(row<0 || row>=n || col<0 || col>=m) return;
    if(ara[row][col]==0)
    {
        //cout<<row<<" "<<col<<endl;
        tag++;
    }
    else return;
    dfs4(row,col-1);
}
int main()
{
    int i,j,x,y,z;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ara[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ara[i][j]==1)
            {
               // cout<<'x'<<endl;
               // cout<<"i = "<<i<<" j = "<<j<<endl;
                //ara[i][j]=2;
                dfs1(i+1,j);
                dfs2(i-1,j);
                dfs3(i,j+1);
                dfs4(i,j-1);
            }
        }
    }
    cout<<tag<<"\n";
}
