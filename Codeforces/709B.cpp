#include<bits/stdc++.h>
using namespace std;
long long val[1000006];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long i,j,n,x,y,z=2000006,m,p,q=0,r=0,s=0,t=0;
    cin>>n>>x;
    long long a[100005];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        y=abs(x-abs(a[i]));
        if(y<z)
        {
            z=y;
            m=i;
            j=a[i];
        }
        r=max(r,a[i]);
    }
    //cout<<j<<" "<<m<<endl;;
    //val[j]=z;
    if(m!=(n-1))
    {
        for(i=m;i<n-1;i++)
        {
            p=abs(a[i]-a[i+1]);
            val[a[i+1]]=p;
        }
    }
    i=m;
    if(i!=0)
    {
        for(;i>0;i--)
        {
            q=abs(a[i]-a[i-1]);
            val[a[i-1]]=q;
        }
    }
    //cout<<p<<" "<<q<<" "<<r<<endl;
    for(i=0;i<=r;i++)
    {
        //cout<<val[i]<<endl;
        s=s+val[i];
        t=max(t,val[i]);
    }
    //cout<<endl;
    s=s-t;

    cout<<s+z<<endl;

}
