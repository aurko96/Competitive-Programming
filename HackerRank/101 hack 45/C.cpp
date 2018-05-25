// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    LL ara[100005];
    cin>>n;
    for(i=0;i<n;i++) cin>>ara[i];
    sort(ara,ara+n);
    x=__gcd(ara[1],ara[2]);
    for(i=3;i<n-1;i++)
    {
        x=__gcd(x,ara[i]);
    }
    if(n==1) cout<<ara[0]+1;
    else if(ara[0]%x==0) cout<<-1;
    else cout<<x<<"\n";
}
