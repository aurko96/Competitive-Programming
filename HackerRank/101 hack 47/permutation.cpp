#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x=0,y,ara[102];
    int mp[100005];
    memset(mp,0,sizeof(mp));
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
        if(mp[ara[i]]>1) x=1;
    }
    if(x) cout<<"NO\n";
    else cout<<"YES\n";
}
