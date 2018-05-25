#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
    int i,j,k,n,x,y,z,p,q,r,s,t,u,v,w,best,worst;
    string str[200];
    cin>>n>>k;
    for(i=0,y=0;i<=n;i++)
    {
        cin>>str[i];
        if(i==n)
        {
            x=str[i].size();
        }
        else
        {
            a[y++]=str[i].size();
        }
    }
    sort(a,a+n);
    int count=0,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<x)
        {
            count++;
        }
        else if(a[i]==x)
        {
            flag++;
        }
    }
    z=count+flag;
    //cout<<z<<endl;
    if(count!=0)
    {
        p=count/k;
        if(p!=0)
        {
            q=count%k;
        }
        best=count+(5*p)+1;
        cout<<best<<" ";
        r=(z-1)/k;
        if(r!=0)
        {
            s=(z-1)%k;
        }
        worst=(z-1)+(5*r)+1;
        cout<<worst;
    }
    else
    {
        best=1;
        cout<<best<<" ";
        r=(z-1)/k;
        if(r!=0)
        {
            s=(z-1)%k;
        }
        worst=(z-1)+(5*r)+1;
        cout<<worst;
    }
}
