#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005],dp[500][500];
int lcs(int x,int y)
{
    if(x==0 || y==0) return 0;
    if(dp[x-1][y-1]!=-1) return dp[x-1][y-1];
    if(a[x-1]==b[y-1]) return dp[x-1][y-1]=1+lcs(x-1,y-1);
    else return dp[x-1][y-1]=max(lcs(x,y-1),lcs(x-1,y));
}
int main()
{
    int i,j,n,m,x,y=1;
    while(scanf("%d %d",&n,&m)==2)
    {
        memset(dp,-1,sizeof(dp));
        if(n==0 && m==0) break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
        }
        x=lcs(n,m);
        printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",y++,x);
    }
}
