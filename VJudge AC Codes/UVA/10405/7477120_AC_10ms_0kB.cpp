#include<bits/stdc++.h>
using namespace std;
int dp[1500][1500];
string str1,str2;
int lcs(int x,int y)
{
    if(x==0 || y==0) return 0;
    if(dp[x-1][y-1]!=-1) return dp[x-1][y-1];
    if(str1[x-1]==str2[y-1]) return dp[x-1][y-1]=1+lcs(x-1,y-1);
    else return dp[x-1][y-1]=max(lcs(x,y-1),lcs(x-1,y));
}
int main()
{
    int i,j,n,m,x;
    while(getline(cin,str1))
    {
        getline(cin,str2);
        memset(dp,-1,sizeof(dp));
        n=str1.size();
        m=str2.size();
        x=lcs(n,m);
        cout<<x<<"\n";
    }
}

