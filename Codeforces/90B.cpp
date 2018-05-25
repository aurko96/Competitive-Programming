#include<bits/stdc++.h>
using namespace std;
int n,m;
bool legit[105][105];
char str[105][105];
void down(int row,int col,char ch,int x,int y)
{
    if(row<0 || col<0 || row>=n || col>=m) return;
    if(str[row][col]==ch && (row!=x || col!=y))
    {
        legit[row][col]=1;
        legit[x][y]=1;
    }
    down(row+1,col,ch,x,y);
}

void up(int row,int col,char ch,int x,int y)
{
    if(row<0 || col<0 || row>=n || col>=m) return;
    if(str[row][col]==ch && (row!=x || col!=y))
    {
        legit[row][col]=1;
        legit[x][y]=1;
    }
    up(row-1,col,ch,x,y);
}

void left(int row,int col,char ch,int x,int y)
{
    if(row<0 || col<0 || row>=n || col>=m) return;
    if(str[row][col]==ch && (row!=x || col!=y))
    {
        legit[row][col]=1;
        legit[x][y]=1;
    }
    left(row,col-1,ch,x,y);
}

void right(int row,int col,char ch,int x,int y)
{
    if(row<0 || col<0 || row>=n || col>=m) return;
    if(str[row][col]==ch && (row!=x || col!=y))
    {
        legit[row][col]=1;
        legit[x][y]=1;
    }
    right(row,col+1,ch,x,y);
}

int main()
{
    int i,j,x,y,z;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>str[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            char ch=str[i][j];
            down(i,j,ch,i,j);
            up(i,j,ch,i,j);
            left(i,j,ch,i,j);
            right(i,j,ch,i,j);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            //cout<<legit[i][j];
            if(legit[i][j]==0)
            {
                cout<<str[i][j];
            }
        }
       // cout<<"\n";
    }
}
