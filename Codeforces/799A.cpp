#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,k,d,x,y,z;
    cin>>n>>t>>k>>d;
    if(d<t)
    {
        if(k<n) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else
    {
        if(k>n) cout<<"NO\n";
        else
        {
            x=n-k;
            if(d==t)
            {
                if(x>k) cout<<"YES\n";
                else cout<<"NO\n";
            }
            else if(d>t)
            {
                y=d/t;
                z=n-(k*y);
                if(z>k) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
    }
}
