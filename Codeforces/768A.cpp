#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL ara[100005],i,j,n,x,y,z;
    cin>>n;
    LL mn=1e12;
    LL mx=0;
    LL cnt=0;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mn=min(mn,ara[i]);
        mx=max(mx,ara[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]!=mn && ara[i]!=mx)
        {
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}
