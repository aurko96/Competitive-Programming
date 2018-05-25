#include<bits/stdc++.h>
using namespace std;
int ara[1005],dp[2000][5],n;
int call(int index,int first)
{
    if(index>=n) return 0;
    if(index==n-1 && first==1) return 0;
    if(dp[index][first]!=-1) return dp[index][first];
    int ret=0;
    ret=max(ret,call(index+1,first));
    if(index==0) first=1;
    ret=max(ret,ara[index]+call(index+2,first));
    //cout<<ret<<" "<<index<<endl;
    return dp[index][first]=ret;
}
int main()
{
    int i,j,x,y,z,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(j=0;j<n;j++) cin>>ara[j];
        x=call(0,0);
        cout<<"Case "<<i<<": "<<x<<"\n";
    }
}
