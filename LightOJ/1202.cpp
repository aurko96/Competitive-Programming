#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,n,x,y,a,b,p,q,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>y>>a>>b;
        if((x-a)==(y-b))
        {
            cout<<"Case "<<i<<": "<<1<<endl;
        }
        else if((x+y)==(a+b))
        {
            cout<<"Case "<<i<<": "<<1<<endl;
        }
        else if((x-a)%2==0 && (y-b)%2==0)
        {
            cout<<"Case "<<i<<": "<<2<<endl;
        }
        else if((x-a)%2!=0 && (y-b)%2!=0)
        {
            cout<<"Case "<<i<<": "<<2<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": impossible"<<endl;
        }
    }
}
