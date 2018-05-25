#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b[2000],c[2000],i,j,m,n,x,y=0,z,p=0;
    cin>>a>>n;
    x=a.length();
    for(i=0,j=97;i<26;i++,j++)
    {
        cin>>m;
        y=max(y,m);
        b[j]=m;
    }
    for(i=1;i<=x;i++)
    {
        z=a[i-1];
        p=p+(i*b[z]);
        if(i==x)
        {
            for(j=x+1;j<=x+n;j++)
            {
                p=p+(j*y);
            }
        }
    }
    cout<<p;
}
