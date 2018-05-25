// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    int ara[1000],i,j,n,x,y,z;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        ara[x]=i;
    }
    for(i=1;i<=n;i++) cout<<ara[ara[i]]<<"\n";
}
