#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,x,y,z,p;
    cin>>n>>m>>x>>y;
    i=0;
    for(i=0;i<200;i++)
    {
        p=m+(i*n);
        z=y+(i*x);
//        i++;
//        if(p==z) break;
    cout<<p<<" "<<z<<endl;
    }
    //cout<<i<<"\n";
    //p=__gcd(n,m);
    //z=__gcd(x,y);
}
