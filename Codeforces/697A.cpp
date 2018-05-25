#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,n,a,b,c,x,y,z;
    cin>>x>>y>>z;
    if(z<x)
    {
        cout<<"NO"<<'\n';
        return 0;
    }
    if(z==x)
    {
        cout<<"YES"<<'\n';
        return 0;
    }
    if(z<(x+y))
    {
        cout<<"NO"<<'\n';
        return 0;
    }
    a=z-x;
    if(a%y==0)
    {
        cout<<"YES"<<'\n';
    }
    else if(a%y==1)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
    //main();
}
