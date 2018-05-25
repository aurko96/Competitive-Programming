#include<bits/stdc++.h>
#define LL long long
using namespace std;
int n,ara[20][20],life[20];
int dp[1<<16];

int Set(int N,int pos) { return N = N | (1<<pos); }
bool Check(int N,int pos) { return (bool)(N & (1<<pos)); }

int call(int mask)
{
    if(mask==(1<<n)-1) return 0;
    if(dp[mask]!=-1) return dp[mask];
    int ret=1<<30;
    for(int i=0;i<n;i++)
    {
        if(Check(mask,i)==1) // Using weapon of the dead target
        {
            for(int j=0;j<n;j++)
            {
                // Selecting living targets to kill
                // from the dead target's weapon

                if(Check(mask,j)==0)
                {
                    int shots;
                    if(ara[i][j]!=0) shots=ceil((double)life[j]/ara[i][j]);
                    else shots=life[j];

                    ret=min(ret,shots+call(Set(mask,j)));
                }
            }
        }
    }
    return dp[mask]=ret;
}

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int j=0;j<n;j++) cin>>life[j];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                char ch;
                cin>>ch;
                ara[j][k]=(ch-'0');
            }
        }
        int ans=1<<30;

        // Killing a target from the default gun (damage=1) at first
        for(int j=0;j<n;j++)
        {
            ans=min(ans,life[j]+call(Set(0,j)));
        }
        cout<<"Case "<<i<<": "<<ans<<"\n";
    }
}
