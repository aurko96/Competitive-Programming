#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n;
    LL ara[200005];
    for(i=0;i<n;i++) cin>>ara[i];
    sort(ara,ara+n);
    LL mn=1e12,cnt=0;
    for(i=0;i<n-1;i++)
    {
        x=abs(ara[i+1]-ara[i]);
        mn=min(mn,x);
    }
    for(i=0;i<n-1;i++)
    {
        x=abs(ara[i+1]-ara[i]);
        if(x==mn) cnt++;
    }
    cout<<mn<<" "<<cnt<<"\n";
}
