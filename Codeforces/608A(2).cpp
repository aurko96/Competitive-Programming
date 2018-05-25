#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x,y,z,p,q;
    cin>>n>>t;
    q=t;
    while(n)
    {
        cin>>x>>y;
        z=t-x;
        if(z<y)
        {
            p=y-z;
            q=q+p;
        }
        n--;
    }
    cout<<q;
}

