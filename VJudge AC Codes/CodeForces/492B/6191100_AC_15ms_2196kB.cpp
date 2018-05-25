#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2000],i,m,n;
    double x,y=0,z=0,p;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    z=max(a[0],(m-a[n-1]));
    for(i=0;i<n-1;i++)
    {
        x=a[i+1]-a[i];
        y=max(y,x);
    }
    p=max((y/2),z);
    cout.precision(9);
    cout<<fixed<<p;
}
