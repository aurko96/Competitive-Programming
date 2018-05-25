#include<bits/stdc++.h>
using namespace std;
int recurse(int b,int c)
{
    if(b<c)
    {
        int temp=b;
        b=c;
        c=temp;
    }
    if(b%c==0)
    {
        return c;
    }
    else
    {
        return recurse(c,b%c);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    int i,n,a,b,c,x,y,z,p,q,r,s,t;
    cin>>a>>b>>c>>x>>y;
    n=recurse(b,c);
    q=(b*c)/n;
    r=(a/b)*x;
    s=(a/c)*y;
    t=(a/q)*min(x,y);
    cout<<r+s-t;
}
