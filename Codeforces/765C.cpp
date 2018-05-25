#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>x>>y>>z;
    LL p,q,r,s,t;
    p=y/x;
    q=y%x;
    r=z/x;
    s=z%x;
    t=p+r;
    if(r==0 && q>0)
    {
        cout<<-1;
        return 0;
    }
    if(p==0 && s>0)
    {
        cout<<-1;
        return 0;
    }
    if(t==0)
    {
        cout<<-1;
    }
    else cout<<t<<"\n";
}
