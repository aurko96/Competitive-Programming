#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x=0,y=0;
    string a;
    cin>>n>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='1')
        {
            x++;
        }
        else if(a[i]=='0')
        {
            y++;
        }
    }
    if(x<=y)
    {
        j=x;
    }
    else if(y<x)
    {
        j=y;
    }
    cout<<n-(2*j);
}
