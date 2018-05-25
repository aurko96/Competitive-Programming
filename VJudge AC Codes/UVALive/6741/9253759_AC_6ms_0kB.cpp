#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        double p,q,r,s;
        cin>>x>>y;
        if(x>=y)
        {
            s=(double)x/2;
            p=(double)sqrt((x*x)-(s*s));
            q=s+y;
            if(q<x) q=x;
            r=(double)q*p;
            cout<<fixed<<setprecision(3)<<r<<"\n";
        }
        else
        {
            s=(double)y/2;
            p=(double)sqrt((y*y)-(s*s));
            q=s+x;
            if(q<y) q=y;
            r=(double)q*p;
            cout<<fixed<<setprecision(3)<<r<<"\n";
        }
    }
}
