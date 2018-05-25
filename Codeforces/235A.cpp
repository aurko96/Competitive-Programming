#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,k,n,x,y,w,p,q,mx=0;
    cin>>n;
    w=max(n-50,1LL);
    for(i=n;i>=w;i--)
    {
        for(j=n;j>=w;j--)
        {
            for(k=n;k>=w;k--)
            {
                x=__gcd(i,j);
                p=(i*j)/x;
                y=__gcd(p,k);
                q=(p*k)/y;
                mx=max(mx,q);
            }
        }
    }
    cout<<mx<<"\n";
}
