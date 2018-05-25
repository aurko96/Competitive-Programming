#include<bits/stdc++.h>
using namespace std;
char area[100][100];
int row,col,counts;
void dfs(int r,int c)
{
    if(r<0 || c<0 || r>=row || c>=col) return;
    if(area[r][c]=='#') return;
    if(area[r][c]=='@' || area[r][c]=='.')
    {
        counts++;
        area[r][c]='#';
        dfs(r+1,c);
        dfs(r-1,c);
        dfs(r,c+1);
        dfs(r,c-1);

    }
    return;
}
int main()
{
    int i,j,k,n,x,y,z,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&col);
        scanf("%d",&row);
        counts=0;
        for(j=0;j<row;j++)
        {
            for(k=0;k<col;k++)
            {
                cin>>area[j][k];
                if(area[j][k]=='@')
                {
                    x=j;
                    y=k;
                }
            }
        }
        dfs(x,y);
        printf("Case %d: %d\n",i,counts);
    }

}
