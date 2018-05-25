#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n;
    if(n==0){ cout<<1; return 0; }
    if(n%2==0 && n%4!=0)
    {
        cout<<4<<"\n";
    }
    else if(n%2==0 && n%4==0)
    {
        cout<<6<<"\n";
    }
    else if(n%2!=0)
    {
        x=--n;
        if(x%4==0)
        {
            cout<<8<<"\n";
        }
        else if(x%4!=0)
        {
            cout<<2<<"\n";
        }
    }
}
