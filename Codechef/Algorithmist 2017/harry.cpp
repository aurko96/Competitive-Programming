#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL i,j,n,t,ara[100005];
int main()
{
    map<LL,LL>mp;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        LL cnt=0;
        mp.clear();
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>ara[j];
            cnt+=mp[ara[j]];
            mp[ara[j]]++;
        }
        cout<<cnt<<"\n";
    }
}
