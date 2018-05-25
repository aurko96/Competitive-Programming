#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,x[4000],y[4000],z[4000];
    cin>>m>>n;
    string a[n+1],b[n+1],c[m+1],d[m+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        x[i]=a[i].length();
        y[i]=b[i].length();
    }
    for(i=0;i<m;i++)
    {
        cin>>c[i];
        z[i]=c[i].length();
    }
    for(i=0,j=0;i<m;j++)
    {
        if(j==n)
        {
            j=0;
        }
        if(c[i]==a[j])
        {
            if(z[i]>y[j])
            {
                d[i]=b[j];
            }
            else
            {
                d[i]=a[j];
            }
            i++;
        }
    }
    for(i=0;i<m;i++)
    {
        cout<<d[i]<<" ";
    }
}
