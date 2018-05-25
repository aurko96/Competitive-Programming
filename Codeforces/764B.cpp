// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,k,n,x,y,z;
    LL ara[200005];
    cin>>n;
    for(i=0;i<n;i++) cin>>ara[i];
    for(i=0,j=n;i<n/2;i++,j--)
    {
        cout<<i<<endl;
        reverse(ara+i,ara+j);
        for(k=0;k<n;k++) cout<<ara[k]<<" ";
        cout<<endl;
    }
    for(i=0;i<n;i++) cout<<ara[i]<<" ";
}

