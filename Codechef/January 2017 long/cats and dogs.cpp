#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z,p,q,r,s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y>>z;
        p=x*4;
        q=y*4;
        LL mx,mn;
        mx=p+q;
        if((y*2)>=x) mn=q;
        else
        {
            r=x-(y*2);
            mn=(r*4)+q;
        }
        if(z%4==0 && z>=mn && z<=mx) cout<<"yes\n";
        else cout<<"no\n";
    }
}
