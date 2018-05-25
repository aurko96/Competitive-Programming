#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100005],i,j,n,k,x,y,z,count=1;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]<=k)
        {
            count++;
        }
        else
        {
            count=1;
        }
    }
    cout<<count<<"\n";
}
