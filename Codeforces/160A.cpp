#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200],i,n,x=0,y,z=0,p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        z=z+a[i];
    }
    p=z/2;
    sort(a,a+n);
    reverse(a,a+n);
    for(i=0;i<n;i++)
    {
        x=x+a[i];
        if(x>p)
        {
            cout<<i+1;
            return 0;
        }
    }
}
