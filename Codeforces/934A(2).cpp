#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int ara[100],ara2[100];
    LL ara3[100002];
    for(int i=0;i<n;i++) cin>>ara[i];
    for(int i=0;i<m;i++) cin>>ara2[i];
    sort(ara,ara+n);
    sort(ara2,ara2+m);
    LL mn1=3e18,mn2=3e18,mn3=3e18,mn4=3e18,mx1,mx2,mx2,mx4;
    mx1=mx2=mx3=mx4=0;
    for(int i=0;i<n;i++)
    {
        if(ara[i]>=0)
        {
            if(ara[i]>mx1)
            {
                mx1=ara[i];
                mx2=mx1;
            }
            if(ara[i]<mn1)
            {
                mn1=ara[i];
                mn2=mn1;
            }
        }
        else
        {
            if(ara[i]>mx1)
            {
                mx1=ara[i];
                mx2=mx1;
            }
            if(ara[i]<mn1)
            {
                mn1=ara[i];
                mn2=mn1;
            }
        }

    }
    LL x;
    if(ara[n-1]>=0 && ara2[m-1]>=0) x=ara[n-2]*ara2[m-1];
    else if(ara[n-1]>=0 && ara2[m-1]<0)
    {
        if(ara[n-1]==0)
        {
            if(ara[n-2]>0)x=ara[1]*ara2[m-1];
            else if(ara[n-2]<0) x=ara[1]*ara2[0];
        }
        else x=ara[1]*ara2[m-1];
    }
    else if(ara[n-1]<0 && ara2[m-1]>=0)
    {
        x=ara[n-2]*ara2[0];
    }
    else if(ara[n-1]<0 && ara2[m-1]<0)
    {
        x=ara[1]*ara2[0];
    }
    cout<<x<<"\n";


}

