#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100005],b[100005],c,i,j,n,x,y,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b[0]=a[n-1];
    for(i=n-1,j=1;i>0;i--)
    {
        b[j++]=a[i-1]+a[i];
    }
    reverse(b,b+n);
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}
