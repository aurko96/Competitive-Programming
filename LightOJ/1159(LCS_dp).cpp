#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3;
int dp[52][52][52];
int lcs(int x,int y,int z)
{
    if(x<0 || y<0|| z<0) return 0;
    if(dp[x][y][z]!=-1) return dp[x][y][z];
    if(s1[x]==s2[y] && s1[x]==s3[z]) return dp[x][y][z]=1+lcs(x-1,y-1,z-1);
    else return dp[x][y][z]=max(lcs(x-1,y,z),max(lcs(x,y-1,z),lcs(x,y,z-1)));
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>s1>>s2>>s3;
        int x,l,m,n;
        l=s1.size();
        m=s2.size();
        n=s3.size();
        x=lcs(l-1,m-1,n-1);
        cout<<"Case "<<i<<": "<<x<<"\n";
    }
}
