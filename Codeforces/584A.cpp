#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,t,x;
    cin>>n>>t;
    if(n==1 && t==10)
    {
        cout<<-1;
    }
    else if(t==10 && n!=1)
    {
        cout<<1;
        for(i=1;i<n;i++)
        {
            cout<<0;
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            cout<<t;
        }
    }
}
