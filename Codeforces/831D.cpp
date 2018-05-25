// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    FastRead
    LL n,k,p;
    LL pp[5000],key[5000];
    cin>>n>>k>>p;
    for(int i=0;i<n;i++) cin>>pp[i];
    for(int i=0;i<k;i++) cin>>key[i];
    sort(pp,pp+n);
    sort(key,key+k);
    map<LL,int>mp;
    vector<LL>vv;
    LL x,y,z,mn=1e16,mx=0,aa=0;
    for(int i=0;i<n;i++)
    {
        mn=1e16;
        for(int j=0;j<k;j++)
        {
            if(mp[key[j]]==1) continue;
            x=abs(pp[i]-key[j]);
            y=abs(key[j]-p);
            z=x+y;
            //cout<<x<<" "<<y<<" "<<z<<endl;
            if(z<mn)
            {
                mn=z;
                aa=key[j];
            }
        }
        mp[aa]=1;
        vv.push_back(mn);
    }
    for(int i=0;i<vv.size();i++)
    {
        mx=max(mx,vv[i]);
    }
    cout<<mx<<"\n";
}
