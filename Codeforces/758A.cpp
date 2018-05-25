// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,x,y=0,z;
    cin>>n;
    LL ara[1000],mx=0;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mx=max(mx,ara[i]);
    }
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(ara[i]<mx)
        {
            x=mx-ara[i];
            y+=x;
        }
    }
    cout<<y<<"\n";
}
