#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],i,n,x=0,y,count=1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            count++;
        }
        else if(a[i]>a[i+1])
        {
            if(count>x)
            {
                x=count;
            }
            count=1;
        }

    }
    if(x>=count)
    {
        cout<<x;
    }
    else
    {
        cout<<count;
    }
}