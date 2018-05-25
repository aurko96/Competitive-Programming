#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200],i,j,n,p=0,q=200,x,y,z,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>p)
        {
            p=a[i];
            x=i;
        }
    }
    //cout<<x<<endl;
    for(i=0;i<x;i++)
    {
        if(a[x-i]>a[x-1-i])
        {
            int temp=a[x-i];
            a[x-i]=a[x-1-i];
            a[x-1-i]=temp;
            count++;
        }
    }
    for(i=0;i<n;i++)
    {
        //cout<<a[i]<<" ";
        if(a[i]<=q)
        {
            q=a[i];
            y=i;
        }
    }
    //cout<<endl<<y;
    for(i=0;i<n-y-1;i++)
    {
        if(a[y+i]<a[y+1+i])
        {
            int temp=a[y+i];
            a[y+i]=a[y+1+i];
            a[y+1+i]=temp;
            count++;
        }
    }
    //cout<<endl;
    /*for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
    //cout<<endl;
    cout<<count;

}
