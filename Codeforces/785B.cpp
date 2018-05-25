// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    LL mn1,mn2;
    LL mx1,mx2;
    mx1=mx2=0;
    mn1=mn2=1e12;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>x>>y;
        mn1=min(mn1,y);
        mx1=max(mx1,x);
    }
    LL m;
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        mn2=min(mn2,y);
        mx2=max(mx2,x);

    }
    LL ans=0;
    ans=max(ans,max((mx1-mn2),(mx2-mn1)));
    cout<<ans<<"\n";

}
