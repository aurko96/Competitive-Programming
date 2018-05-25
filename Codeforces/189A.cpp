#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,n,x,y,z,a=0;
    cin>>n;
    cin>>x>>y>>z;
    for(i=0;(i*x)<=n;i++)
    {
        for(j=0;i*x+j*y<=n;j++)
        {
            k=(n-(i*x)-(j*y))/z;
            if((i*x)+(j*y)+(k*z)==n)
            {
                a=max(i+j+k,a);
            }
            cout<<i<<endl<<j<<endl<<k<<endl<<a<<endl;
        }
    }
    cout<<a;
}

