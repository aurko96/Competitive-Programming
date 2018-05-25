#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100005],b,c,i,n,x=0,y,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    x=x+a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            y=a[i-1]-a[i];
            x=x+y+1;
        }
        else if(a[i]>a[i-1])
        {
            y=a[i]-a[i-1];
            x=x+y+1;
        }
        else
        {
            x=x+1;
        }
    }
    cout<<x+n;
}
