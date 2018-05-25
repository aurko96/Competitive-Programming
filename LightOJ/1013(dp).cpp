#include<bits/stdc++.h>
#define LL long long
using namespace std;
string str,str2;
LL dp[50][50],dp2[50][50][50];
int n,m;
LL lcs(LL x,LL y)
{
    if(x==n || y==m) return 0;
    if(dp[x][y]!=-1) return dp[x][y];
    if(str[x]==str2[y]) return dp[x][y]=1+lcs(x+1,y+1);
    else return dp[x][y]=max(lcs(x,y+1),lcs(x+1,y));
}
LL calc(LL x,LL y,LL len)
{
    if(x==n || y==m)
    {
        if(x==n && y==m && len==0) return 1;
        else if(x==n && y==m && len!=0) return 0;
        else if(x==n && y!=m) return dp2[x][y][len]=calc(x,y+1,len-1);
        else if(x!=n && y==m) return dp2[x][y][len]=calc(x+1,y,len-1);
    }
    if(dp2[x][y][len]!=-1) return dp2[x][y][len];
    if(str[x]==str2[y]) return dp2[x][y][len]=calc(x+1,y+1,len-1);
    else return dp2[x][y][len]=calc(x,y+1,len-1)+calc(x+1,y,len-1);
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        memset(dp2,-1,sizeof(dp2));
        cin>>str>>str2;
        n=str.size();
        m=str2.size();
        LL ans1,ans2;
        ans1=lcs(0,0);
        ans1=(n+m)-ans1;
        ans2=calc(0,0,ans1);
        cout<<"Case "<<i<<": "<<ans1<<" "<<ans2<<"\n";

    }
}
