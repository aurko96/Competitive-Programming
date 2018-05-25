#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[200];
    int i,j,n,m,x,y,z,v,t,p,q,r,s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        p=0;
        q=10000000;
        for(j=0;j<n;j++)
        {
            cin>>a[j]>>x>>y>>z;
            v=(x*y*z);
            if(v>p)
            {
                p=v;
                r=j;
            }
            if(v<q)
            {
                q=v;
                s=j;
            }

        }
        if(p==q)
        {
            cout<<"Case "<<i<<": no thief"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<a[r]<<" took chocolate from "<<a[s]<<endl;
        }
    }
}
