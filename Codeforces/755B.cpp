#include<bits/stdc++.h>
#define LL long long
using namespace std;
map<string,int>mp;
int main()
{
    string str[2005];
    LL i,j,n,x,y,z;
    LL count=0;
    cin>>x>>y;
    for(i=0;i<x+y;i++)
    {
        cin>>str[i];
        mp[str[i]]++;
        if(mp[str[i]]==2) count++;
    }
    if(x==y)
    {
        if(count%2==0) cout<<"NO\n";
        else if(count%2!=0) cout<<"YES\n";
    }
    else if(x>y)
    {
        cout<<"YES\n";
    }
    else if(x<y)
    {
        cout<<"NO\n";
    }
}
