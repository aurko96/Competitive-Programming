#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],b[100005],c[100005],i,j,x,n,y,z=0,count=0,p=0,q=0,*r;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        c[i]=b[i];
    }
    reverse(c,c+n);
    sort(b,b+n);
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            p++;
        }
    }
    if(p==n)
    {
        cout<<"yes"<<endl<<1<<" "<<1;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(c[i]==b[i])
        {
            z++;
        }
    }
    if(z==n)
    {
        cout<<"yes"<<endl<<1<<" "<<n;
        return 0;
    }
    /*for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }*/
    for(i=0,j=1;i<n-1;i++)
    {
        if(a[i]>a[j])
        {
            q=1;
            static int x=i;
            y=j;
            j++;
            r=&x;
            //cout<<endl<<x<<endl<<y<<endl;
        }
        else if(q!=1)
        {
            j++;
        }
        if(i==j)
        {
            break;
        }
    }
    //cout<<*r<<endl;
    reverse(&a[*r],&a[y+1]);
    /*for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            count++;
        }
    }
    if(count==n)
    {
        cout<<"yes"<<endl<<*r+1<<" "<<y+1;
    }
    else
    {
        cout<<"no";
    }
}
