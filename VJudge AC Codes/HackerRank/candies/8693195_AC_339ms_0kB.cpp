#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ara[100005],ara2[100005];
    long long x=0,y=1,z;
    long long i,j,n;
    cin>>n;
    for(i=0;i<n;i++) cin>>ara[i];
    for(i=1;i<n;i++)
    {
        if(ara[i]<=ara[i-1])
        {
            y=1;
            if(i==1)
            {
                if(ara[i]==ara[i-1]) ara2[i-1]=1;
                else ara2[i-1]=2;
            }
            ara2[i]=y;
        }
        else if(ara[i]>ara[i-1])
        {
            y++;
            if(i==1) ara2[i-1]=1;
            ara2[i]=y;
        }
        //cout<<x<<endl;
    }
    //for(i=0;i<n;i++) cout<<ara2[i]<<" ";
    y=1;
    for(i=n-1;i>=1;i--)
    {
        if(ara[i]>=ara[i-1])
        {
            y=1;
            if(i==n-1)
            {
                if(ara[i]==ara[i-1]) z=1;
                else z=2;
                ara2[i]=max(z,ara2[i]);
            }
            y=max(y,ara2[i-1]);
            ara2[i-1]=y;
        }
        else if(ara[i]<ara[i-1])
        {
            y++;
            if(i==n-1)
            {
                z=1;

                ara2[i]=max(z,ara2[i]);
            }
            y=max(y,ara2[i-1]);
            ara2[i-1]=y;
        }
        //cout<<x<<endl;
    }
    for(i=0;i<n;i++)
    {
        //cout<<ara2[i]<<endl;
        x+=ara2[i];
    }
    cout<<x<<endl;
}
