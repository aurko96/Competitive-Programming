// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    LL n;
    cin>>n;
    double rr;
    rr=sqrt(n);
    LL sq,num;
    sq=rr;
    if(rr==sq)
    {
        cout<<2*(sq+sq)<<"\n";
        return 0;
    }
    num=sq*(sq+1);
    if(num<n)
    {
        cout<<2*((sq+1)+(sq+1))<<"\n";
    }
    else
    {
        cout<<2*(sq+(sq+1))<<"\n";
    }
}
