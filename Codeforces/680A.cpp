#include<bits/stdc++.h>
int a[200],c[200],d[200];
using namespace std;
int main()
{
    int b=0,j=0,k=0,i,n,x,y=0,z=0,p,q,count=0;
    for(i=0;i<5;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(i=1;i<=100;i++)
    {
       y=y+(i*a[i]);
        if(a[i]==1)
        {
            count++;
        }

        if(a[i]==2)
        {
            z=z+(i*a[i]);
            c[j++]=z;
            z=0;
        }
        if(a[i]>=3)
        {
            b=b+(i*3);
            d[k++]=b;
            b=0;
        }
    }
    if(count==5)
    {
        cout<<y;
        cout<<endl;
        return 0;
    }
    p=max(j,k);
    for(i=0;i<p;i++)
    {
        q=max(c[i],d[i]);
    }
    //cout<<q<<endl;
    //cout<<y<<" "<<z<<" "<<b<<endl;
    //c=min(z,b);
    if(q>0)
    {
        y=y-q;
        cout<<y;
        cout<<endl;
    }
    else
    {
        cout<<y;
        cout<<endl;
    }
}
