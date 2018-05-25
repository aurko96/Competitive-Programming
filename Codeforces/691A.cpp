#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1002],b,i,n,x=0,y;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            x++;
        }
    }
    if(n==1 && x==0)
    {
        cout<<"YES\n";
    }
    else if(n==1 && x==1)
    {
        cout<<"NO\n";
    }
    else if(x==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

}
