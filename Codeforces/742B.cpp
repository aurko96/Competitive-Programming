#include<bits/stdc++.h>
using namespace std;
map<long long,long long>mp;
int main()
{
    long long i,n,x,y,z=0,p;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>p;
        z+=mp[p];
        y=p^x;
        mp[y]++;
    }
    cout<<z<<"\n";
}
