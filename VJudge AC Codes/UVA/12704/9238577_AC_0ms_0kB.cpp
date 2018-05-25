#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,r;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>r;
        double p,q,a,b;
        p=sqrt((x*x)+(y*y));
        q=abs(p+r);
        a=abs(p-r);
        if(q>=a) cout<<fixed<<setprecision(2)<<a<<" "<<q<<"\n";
        else cout<<fixed<<setprecision(2)<<q<<" "<<a<<"\n";
    }
}
