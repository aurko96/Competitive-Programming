// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n=0,x,y,z;
    cin>>x>>y>>z;
    LL p,q,r;
    for(i=1;i<=x;i++)
    {
        if(i<=x && i*2<=y && i*4<=z)
        {
            n=i+(i*2)+(i*4);
        }
    }
    cout<<n<<"\n";
}
