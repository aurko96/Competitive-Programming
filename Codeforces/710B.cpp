#include<bits/stdc++.h>
using namespace std;
long long a[300005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    long long x,b,c,n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(n%2==0)
    {
        x=(n/2)-1;
        cout<<a[x]<<'\n';
    }
    else
    {
        x=n/2;
        cout<<a[x]<<'\n';
    }
}
