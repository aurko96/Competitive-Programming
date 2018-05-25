#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y,n;
    cin>>a>>b;
    x=min(a,b);
    if(a>=b)
    {
        y=a-b;
    }
    else
    {
        y=b-a;
    }
    n=y/2;
    cout<<x<<" "<<n;
}
