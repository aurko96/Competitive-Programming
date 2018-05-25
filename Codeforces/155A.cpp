#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2000],i,n,x,y,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    x=a[0];
    y=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            x=a[i];
            count++;
        }
        else if(a[i]<y)
        {
            y=a[i];
            count++;
        }
    }
    cout<<count;
}
