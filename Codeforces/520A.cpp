#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b[2000],i,n,x,flag=0;
    cin>>n>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i]=a[i]+32;
        }
    }
    for(i=0;i<n;i++)
    {
        x=a[i];
        b[x]=1;
    }
    for(i=97;i<=122;i++)
    {
        if(b[i]!=1)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
