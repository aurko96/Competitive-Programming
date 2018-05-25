#include<bits/stdc++.h>
#define LL long long
using namespace std;
map<LL,LL>mp;
int main()
{
    LL i,j=0,n,m,x,y,z,p;
    cin>>n>>m>>x>>y;
    for(i=0;i<100000;i++)
    {
        p=m+(i*n);
        z=y+(i*x);
        mp[p]++;
        mp[z]++;
        if(mp[p]>1)
        {
            cout<<p<<"\n";
            return 0;
        }
        else if(mp[z]>1)
        {
            cout<<z<<"\n";
            return 0;
        }
    }
    cout<<-1<<"\n";

}
