#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[2000],b,c,i,n,x,y=0,z;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            y=y+2;
        }
        else
        {
            y=y+1;
        }
    }
    cout<<y;
}
