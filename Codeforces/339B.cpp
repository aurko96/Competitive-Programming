#include<bits/stdc++.h>
long long a[100005];
using namespace std;
int main()
{
    long long i,j,m,n,x=0;
    cin>>m>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(i==0)
        {
            x=x+(a[i]-1);
        }
        if(a[i]>a[i+1])
        {
            x=x+((m-a[i])+a[i+1]);
        }
        else
        {
            x=x+(a[i+1]-a[i]);
        }
    }
    cout<<x;
}
