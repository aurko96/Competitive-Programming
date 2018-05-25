#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)

int main()
{
    int i,t,r1,r2,h,p;
    double r,v;           /*http://www.mathalino.com/reviewer/solid-mensuration-solid-geometry/frustum-right-circular-cone*/
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>r1>>r2>>h>>p;
        r= r2 + (r1-r2)*(double(p)/h);
        v = 1/3.0 * pi * p *( r*r + r*r2 + r2*r2 );
        cout.precision(9);
        cout<<fixed<<"Case "<<i<<": "<<v<<endl;
    }
    return 0;
}
