#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a2,a3,a5,a6,i,j,n,x,y,z,p,q,r;
    cin>>a2>>a3>>a5>>a6;
    x=min(a2,min(a5,a6));
    y=256*x;
    a2=a2-x;
    a5=a5-x;
    a6=a6-x;
    z=min(a2,a3);
    p=32*z;
    q=p+y;
    cout<<q<<"\n";
}
