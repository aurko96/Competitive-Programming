#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int rad[502][502],ura[502][502];
int dp[502][502];

int call(int row,int col)
{
    if(row<=0 || col<=0) return 0;
    if(dp[row][col]!=-1) return dp[row][col];
    int ret=0;
    ret=max(ret,max(rad[row][col]+call(row,col-1),ura[row][col]+call(row-1,col)));
    return dp[row][col]=ret;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        memset(rad,0,sizeof(rad));
        memset(ura,0,sizeof(ura));
        int n,m;
        cin>>n>>m;
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=m;k++)
            {
                int x;
                cin>>x;
                ura[j][k]=ura[j][k-1]+x;
            }
        }

        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=m;k++)
            {
                int x;
                cin>>x;
                rad[j][k]=rad[j-1][k]+x;
            }
        }

        int ans;
        ans=call(n,m);
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}
