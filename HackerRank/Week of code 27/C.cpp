// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
map<unsigned LL,LL>mp;
long long hacko(unsigned long long n)
{
    if(n==1) return mp[n]=1;
    else if(n==2) return mp[n]=2;
    else if(n==3) return mp[n]=3;
    else if(mp[n]!=0) return mp[n];
    else mp[n]=(1*hacko(n-1))+(2*hacko(n-2))+(3*hacko(n-3));
}
int main()
{
    FastRead
    LL i,j,t,x,y,z;
    unsigned LL n;
    cin>>n;
    hacko(n);
    cout<<mp[n]<<endl;
    main();
}
