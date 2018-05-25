#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        LL ara[n+1];
        for(int j=0;j<n;j++) cin>>ara[j];
        LL presum[n+1],suffsum[n+1];
        presum[0]=ara[0];
        suffsum[n-1]=ara[n-1];
        for(int j=1;j<n;j++) presum[j]=presum[j-1]+ara[j];
        for(int j=n-2;j>=0;j--) suffsum[j]=suffsum[j+1]+ara[j];
        LL mn=1e17,ans;
        for(int j=1;j<=n;j++)
        {
            LL x;
            x=presum[j-1]+suffsum[n-(n-j+1)];
            //cout<<presum[j-1]<<" "<<suffsum[n-(n-j+1)]<<" "<<x<<endl;
            if(x<mn)
            {
                mn=x;
                ans=j;
            }
        }
        cout<<ans<<"\n";
    }
}
