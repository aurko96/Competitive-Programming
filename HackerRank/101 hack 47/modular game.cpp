#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n>>x>>y;
    LL ara1[4005],ara2[4005];
    map<LL,LL>mp;
    for(i=0;i<x;i++) cin>>ara1[i];
    for(i=0;i<y;i++) cin>>ara2[i];
    LL mn=1e12;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            z=(ara1[i]+ara2[j])%n;
            if(z==0) mp[n]++;
            else
            {
                z=n-z;
                mp[z]++;
            }
        }
    }
    LL ans;
    for(i=1;i<=n;i++)
    {
        if(mp[i]<mn)
        {
            mn=mp[i];
            ans=i;
        }
    }
    cout<<ans<<"\n";
}
