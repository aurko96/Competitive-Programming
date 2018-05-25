#include<bits/stdc++.h>
int a[200],b[200];
using namespace std;
int main()
{
    int i,j,n,x,y,z,count=0,p,q;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(x==1 || x==n)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                count++;
            }
        }
        cout<<count<<endl;
        return 0;
    }
    if(a[x-1]==1)
    {
        count++;
    }

    for(i=x-2,j=x;i>=0,j<n;i--,j++)
    {
        if(a[i]==1 && a[j]==1)
        {
            count+=2;
            //cout<<'p'<<endl;
        }
        //cout<<i<<" "<<j<<" "<<p<<endl;
        if(i==0 && j==n-1)
        {
            cout<<count;
            cout<<endl;
            return 0;
        }
        if(i==0)
        {
            p=j;
            break;
        }
        else if(j==n-1)
        {
            p=i;
            break;
        }

    }
    //cout<<i<<" "<<j<<" "<<p<<endl;
    //y=min(i,j);
    if(p>=x)
    {
        z=n-p;
        for(i=p+1;i<n;i++)
        {
            if(a[i]==1)
            {
                count++;
            }
        }
    }
    else if(p<x)
    {
        z=p;
        for(i=0;i<z;i++)
        {
            if(a[i]==1)
            {
                count++;
            }
        }
    }
    cout<<count;
    cout<<endl;
}
