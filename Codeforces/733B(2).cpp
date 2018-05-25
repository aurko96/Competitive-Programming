#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<long long,long long>p[100002];
    long long i,j,n,x,y,z=0,m=0,q=0,r=0,s,t=0,u=0,diff1,diff2;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
        y=abs(p[i].first-p[i].second);
        if(y>z)
        {
            z=y;
            m=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==m)
        {
            continue;
        }
        q+=p[i].first;
        r+=p[i].second;
    }
    t=q;
    u=r;
    q+=p[m].first;
    r+=p[m].second;
    t+=p[m].second;
    u+=p[m].first;
    diff1=abs(q-r);
    diff2=abs(t-u);
    cout<<q<<" "<<t<<endl<<r<<" "<<u<<endl;
    cout<<diff1<<" "<<diff2<<endl;
    if(diff2>diff1)
    {
        cout<<m+1;
    }
    else
    {
        cout<<0;
    }

}

