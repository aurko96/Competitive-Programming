#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,x,y,z,a,b=1;;
    cin>>n;
    x=1234567;
    y=123456;
    z=1234;
    for(i=0;(i*x)<=n;i++)
    {
        for(j=0;i*x+j*y<=n;j++)
        {
            k=(n-(i*x)-(j*y))/z;
            if((i*x)+(j*y)+(k*z)==n)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
