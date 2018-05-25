#include<bits/stdc++.h>
using namespace std;
pair<long long,long long>p[100001],q[100001];
int main()
{
    long long i,j,n,t,x=0,y=0,z=0,w=0,r,s;
    cin>>t>>n;
    for(i=0;i<t;i++)
    {
        cin>>p[i].first>>p[i].second;
        q[i].first=p[i].second;
        q[i].second=p[i].first;
    }
    sort(p,p+t);
    sort(q,q+t);
    reverse(p,p+t);
    reverse(q,q+t);
//    for(i=0;i<t;i++)
//    {
//        cout<<p[i].first<<" "<<p[i].second<<endl;
//    }
//    for(i=0;i<t;i++)
//    {
//        cout<<q[i].first<<" "<<q[i].second<<endl;
//    }
    for(i=0;i<n;i++)
    {
        x=x+p[i].first;
        z=z+q[i].second;
    }
    for(i=n;i<t;i++)
    {
        w=w+p[i].second;
        y=y+q[i].first;
    }
    r=x-w;
    s=z-y;
    //cout<<x<<" "<<w<<" "<<z<<" "<<y<<endl;
    //cout<<r<<" "<<s<<endl;
    if(r>=s)
    {
        if(r>0)
        {
            cout<<r<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    else
    {
        if(s>0)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }

}
