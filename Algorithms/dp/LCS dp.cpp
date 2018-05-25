#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
string str1,str2;
int lcs(int x,int y)
{
    if(x<0 || y<0) return 0;
    if(dp[x-1][y-1]!=-1) return dp[x-1][y-1];
    if(str1[x-1]==str2[y-1]) return dp[x-1][y-1]=1+lcs(x-1,y-1);
    else return dp[x-1][y-1]=max(lcs(x,y-1),lcs(x-1,y));
}
int main()
{
    int n,x,y,i;
    cin>>n;
    getchar();
    for(i=0;i<n;i++)
    {
        memset(dp,-1,sizeof(dp));
        str1.clear();
        str2.clear();
        getline(cin,str1);
        str2=str1;
        reverse(str2.begin(),str2.end());
        x=str1.size();
        y=lcs(x-1,x-1);
        cout<<y<<"\n";
    }
}
