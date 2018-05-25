#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y,z,a,b,c;
    cin>>x>>y>>z;
    a=max(x,y);
    c=min(x,y);
    if(z%a==0)
    {
        cout<<"YES";
        return 0;
    }
    for(i=1;;i++)
    {
        b=i*c;
        j=z-b;
        if(j%a==0)
        {
            cout<<"YES";
            return 0;
        }
        if(b>z)
        {
            break;
        }
    }
    cout<<"NO";
}
