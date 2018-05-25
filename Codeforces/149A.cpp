#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],i,n,x=0,flag=0;
    cin>>n;
    for(i=0;i<12;i++)
    {
        cin>>a[i];
    }
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    sort(a,a+12);
    reverse(a,a+12);
    for(i=0;i<12;i++)
    {
        x=x+a[i];
        if(x>=n)
        {
            cout<<i+1;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<-1;
    }
}
