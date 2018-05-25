#include<bits/stdc++.h>
using namespace std;
string str;
int dp[1001];
bool ispalin(int x,int y)
{
    while(x<y)
    {
        if(str[x]!=str[y]) return 0;
        x++;
        y--;
    }
    return 1;
}
int call(int pos)
{
    if(pos==str.size()) return 0;
    if(dp[pos]!=-1) return dp[pos];
    dp[pos]=1000000000;
    for(int i=pos;i<=str.size();i++)
    {
        if(ispalin(pos,i))
        {
            //cout<<"x"<<endl;
            dp[pos]=min(dp[pos],1+call(i+1));
        }
    }
    //cout<<dp[pos]<<endl;
    return dp[pos];
}
int main()
{
    int i,j,n,x,y,z;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>str;
        memset(dp,-1,sizeof(dp));
        x=call(0);
        cout<<"Case "<<i<<": "<<x<<"\n";
    }
}