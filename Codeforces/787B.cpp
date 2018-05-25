#include<bits/stdc++.h>
#define LL long long
using namespace std;
map<LL,LL>mp;
int main()
{
    LL i,j,n,m,x,y,z,flag=0,flag2=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>x;
        for(j=0;j<x;j++)
        {
            cin>>y;
            //y=abs(y);
            mp[y]=1;
            if(mp[-y]==1) flag=1;
        }
        if(!flag) flag2=1;
        flag=0;
        mp.clear();
    }
    if(flag2) cout<<"YES\n";
    else cout<<"NO\n";
}
