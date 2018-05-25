#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005],dp[500][500];
int lcs(int ek,int dui)
{
    if(ek==0 || dui==0) return 0;
    if(dp[ek][dui]!=-1) return dp[ek][dui];
    if(a[ek-1]==b[dui-1] || a[ek-1]==abs(1-b[dui-1]) || a[ek-1]==abs(1+b[dui-1])) return dp[ek][dui]=1+lcs(ek-1,dui-1);
    else return dp[ek][dui]=max(lcs(ek-1,dui),lcs(ek,dui-1));
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int i,j,n,x,y,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>b[i];
    }
    sort(b,b+x);
    y=lcs(n,x);
    cout<<y<<"\n";
}
