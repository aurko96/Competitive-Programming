// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
map<char,int>mp;
int main()
{
    int n,m;
    cin>>n>>m;
    char ch;
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>ch;
        mp[ch]++;
        if(mp[ch]>m) flag=1;
    }
    if(flag) cout<<"NO\n";
    else cout<<"YES\n";
}
