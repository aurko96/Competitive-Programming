#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a[200],b,x,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b=__gcd(a[0],a[1]);
    for(i=2;i<n;i++)
    {
        b=__gcd(b,a[i]);
    }
    cout<<b*n;
}
