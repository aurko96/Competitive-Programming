#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    long long i,j,n,x,y,z,a,b,c,p,q,r=0,s,t;
    cin>>x>>y>>a>>b>>c;
    if((a>=x && a<=y) && (b>=x && b<=y))
    {
        r=abs(b-a)+1;
        if(c>=a && c<=b)
        {
            r=r-1;
        }
            cout<<r<<"\n";
    }
    else if((x>=a && x<=b) && (y>=a && y<=b))
    {
        r=abs(y-x)+1;
        if(c>=x && c<=y)
        {
            r=r-1;
        }
            cout<<r<<"\n";
    }
    else if(a>=x && a<=y)
    {
        r=abs(y-a)+1;
        if(c>=a && c<=y)
        {
            r=r-1;
        }
            cout<<r<<"\n";
    }
    else if(x>=a && x<=b)
    {
        r=abs(b-x)+1;
        if(c>=x && c<=b)
        {
            r=r-1;
        }
            cout<<r<<"\n";
    }
    else if(b>=x && b<=y)
    {
        r=abs(b-x)+1;
        if(c>=x && c<=b)
        {
            r=r-1;
        }
            cout<<r<<"\n";
    }
    else if(y>=a && y<=b)
    {
        r=abs(y-a)+1;
        if(c>=a && c<=y)
        {
            r=r-1;
        }
            cout<<r<<"\n";
    }
    else
    {
        cout<<r<<"\n";
    }
}
