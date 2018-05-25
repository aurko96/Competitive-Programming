#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2000],i,n,x=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            x=1;
            break;
        }
    }
    if(x==1)
    {
        cout<<-1;
    }
    else
    {
        cout<<1;
    }
}
