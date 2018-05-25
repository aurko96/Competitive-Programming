#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,i,j,n,x=0,y=0,z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==5)
        {
            x++;
        }
        else if(a==0)
        {
            y++;
        }

    }
    if(y==0)
    {
        cout<<-1;
        return 0;
    }
    else if(x<9)
    {
        cout<<0;
        return 0;
    }
    z=x/9;
    j=z*9;
    for(i=1;i<=j;i++)
    {
        cout<<5;
    }
    for(i=1;i<=y;i++)
    {
        cout<<0;
    }
}
