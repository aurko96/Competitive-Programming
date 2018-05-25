#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j=1,n,x,y,z=0;
    cin>>n;
    while(n)
    {
        x=n%10;
        n=n/10;
        y=9-x;
        if((y>x || y<0) || (n==0 && y==0))
        {
            y=x;
        }
        z=z+(y*j);
        j=j*10;
        //cout<<"x="<<x<<endl<<"n="<<n<<endl<<"y="<<y<<endl<<"z="<<z<<endl<<"j="<<j<<endl;
    }
    cout<<z;
}
