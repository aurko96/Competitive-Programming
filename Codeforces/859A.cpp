// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    FastRead
    LL n;
    cin>>n;
    LL mx=0;
    for(int i=0;i<n;i++)
    {
        LL x;
        cin>>x;
        mx=max(mx,x);
    }
    if(mx<=25) cout<<0<<"\n";
    else cout<<mx-25<<"\n";
}
