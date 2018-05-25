#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int i,j,n,x,y,z;
    cin>>n>>x>>y;
    int a[100005];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long p,q=0,r=0,count=0;
    double s,t,u,v,w;
    p=n-(x+y);
    int mx=max(x,y);
    int mn=min(x,y);
    //cout<<p<<" "<<mx<<" "<<mn<<endl;
    for(i=0+p;;i++)
    {
        if(count==mx) break;
        q+=a[i];
        //cout<<q<<endl;
        count++;
    }
    count=0;
    //cout<<q<<endl;
    u=(double)q/mx;
    for(i=p+mx;;i++)
    {
        if(count==mn) break;
        r+=a[i];
        count++;
    }
    //cout<<r<<endl;
    v=(double)r/mn;
    s=u+v;
    cout<<fixed<<setprecision(9)<<s<<"\n";
}
