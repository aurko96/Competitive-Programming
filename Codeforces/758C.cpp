// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,m,k,x,y,z;
    cin>>n>>m>>k>>x>>y;
    LL p,r,t;
    double q,s;
    p=(k%m);
    q=(double)k/n;
    cout<<q<<endl;
    r=(LL)ceil(q);
    cout<<p<<" "<<r<<endl;
    s=(double)r/n;
    cout<<s<<endl;
    t=(LL)ceil(s);
    cout<<fixed<<t<<endl;
}
