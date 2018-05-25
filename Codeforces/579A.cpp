#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,k,n,y,z,count=1;
    LL p,q,x;
    cin>>n;
    k=n;
    while(1)
    {
        x=log2(k);
        y=1LL<<x;
        z=k-y;
        //cout<<k<<" "<<y<<" "<<" "<<x<<endl;
        if(z==0) break;
        else
        {
            k=z;
            count++;
        }
    }
    cout<<count<<endl;
}
