#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x,y,z,p;
    cin>>n>>t;
    p=t;
    while(n)
    {
        cin>>x>>y;
        z=x+y;
        if(z>p)
        {
            p=z;
        }
        n--;
    }
    cout<<p;
}
