// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    LL ara[100005];
    cin>>n>>x;
    LL mn=2e9;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mn=min(mn,ara[i]);
    }
    LL sum=0;
    bool flag=0;
    for(i=0;i<n;i++)
    {
        if(ara[i]!=mn)
        {
            y=abs(ara[i]-mn);
            if(y%x!=0) flag=1;
            sum+=y;
        }
    }
    sum/=x;
    if(flag) cout<<-1;
    else cout<<sum<<"\n";

}
