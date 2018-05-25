#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    unordered_map<int,int>mp;
    LL n,k;
    cin>>n>>k;
    LL ara[1000];
    for(int i=0;i<n;i++) cin>>ara[i];
    LL mx=ara[0];
    bool flag=0;
    for(int i=1;i<n;i++)
    {
        mx=max(mx,ara[i]);
        mp[mx]++;
        if(mp[mx]==k) break;
    }
    cout<<mx<<"\n";
}
