#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100005],i,m,n,x=0,y=0,z,count=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        x=x+a[i];
        if(x>m)
        {
            x=x-a[y];
            y++;
        }
        else
        {
            count++;
        }
    }
    cout<<count;
}
