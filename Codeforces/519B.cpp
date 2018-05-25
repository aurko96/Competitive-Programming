#include<bits/stdc++.h>
long long a[100000],b[100000],c[100000];
using namespace std;
int main()
{
    long long i,j,n,x,y,z,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n-2;i++)
    {
        cin>>c[i];
    }
    sort(a,a+n);
    sort(b,b+(n-1));
    sort(c,c+(n-2));
    for(i=0,j=0;i<n,j<n-1;i++,j++)
    {
        if(a[i]==b[j])
        {
            continue;
        }
        else if(a[i]!=b[j])
        {
            flag=1;
            cout<<a[i]<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<a[n-1]<<endl;
    }
    flag=0;
    for(i=0,j=0;i<n-1,j<n-2;i++,j++)
    {
        if(b[i]==c[j])
        {
            continue;
        }
        else if(b[i]!=c[j])
        {
            flag=1;
            cout<<b[i]<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<b[n-2]<<endl;
    }

}
