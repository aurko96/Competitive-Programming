#include<bits/stdc++.h>
using namespace std;
int dp[1500][1500];
string str1,str2,str4;
map<int,char>str3[10005];
int k;
int lcs(int x,int y)
{
    if(x==0 || y==0) return 0;
    if(dp[x-1][y-1]!=-1) return dp[x-1][y-1];
    if(str1[x-1]==str2[y-1])
    {
        str3[x-1][y-1]=str1[x-1];
        return dp[x-1][y-1]=1+lcs(x-1,y-1);
    }
    else
    {
        int p,q;
        p=lcs(x,y-1);
        q=lcs(x-1,y);
        if(p>=q)
        {
            str4+=str3[x-1][y-2];
            return dp[x-1][y-1]=p;
        }
        else
        {
            str4+=str3[x-2][y-1];
            return dp[x-1][y-1]=q;
        }
        //return dp[x-1][y-1]=max(lcs(x,y-1),lcs(x-1,y));
    }
}
int main()
{
    int i,j,n,m,x;
    cin>>str1>>str2;
    memset(dp,-1,sizeof(dp));
    n=str1.size();
    m=str2.size();
    x=lcs(n,m);
    cout<<x<<"\n";
    cout<<str4<<"\n";
}
//ABACDEFG KACDMNEKG

