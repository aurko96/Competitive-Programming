#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        if(x%2!=0) cout<<"Case "<<i<<": Impossible\n";
        else
        {
            y=x/2;
            z=2;
            while(y%2==0)
            {
                y/=2;
                z*=2;
            }
            cout<<"Case "<<i<<": "<<y<<" "<<z<<"\n";
        }
    }
}
