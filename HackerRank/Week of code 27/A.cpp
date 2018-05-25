// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n>>x;
    LL p,q,r;
    if(n%2==0)
    {
        if(x%2==0)
        {
            y=(n-x)/2;
            z=((x-1)/2)+1;
        }
        else
        {
            y=((n-x)/2)+1;
            z=(x-1)/2;
        }
    }
    else
    {
        if(x%2==0)
        {
            y=(n-x)/2;
            z=((x-1)/2)+1;
        }
        else
        {
            y=(n-x)/2;
            z=(x-1)/2;
        }
    }
    LL mn=min(y,z);
    //cout<<"y = "<<y<<" z = "<<z<<endl;
    cout<<mn<<"\n";
   // main();
}
