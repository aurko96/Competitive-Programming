#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[200],b[200],c[200],d[200],i,j=0,n,x,y,z=0,count=0,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            count++;
        }
        else if(a[i]>0)
        {
            flag++;
        }
        else
        {
            z++;
            y=i;
        }
    }
    //cout<<count<<endl<<flag<<endl<<z<<endl;
    sort(a,a+n);
    if(flag==0)
    {
        b[0]=a[0];
        c[0]=a[1];
        c[1]=a[2];
        cout<<1<<" "<<b[0]<<endl<<2<<" "<<c[0]<<" "<<c[1]<<endl;
        cout<<n-3<<" ";
        for(i=3;i<n;i++)
        {
            //d[++j]=a[i];
            cout<<a[i]<<" ";
        }

    }
    else if(flag!=0 && count!=0)
    {
        b[0]=a[0];
        cout<<1<<" "<<b[0]<<endl;
        for(i=count;i<n;i++)
        {
            if(a[i]>0)
            {
                c[0]=a[i];
                x=i;
                cout<<1<<" "<<c[0]<<endl;
                break;
            }
        }
        cout<<n-2<<" ";
        for(i=1;i<n;i++)
        {
            if(i==x)
            {
                continue;
            }
            //d[++j]=a[i];
            cout<<a[i]<<" ";
            //cout<<d[j]<<" ";
        }
    }
}
