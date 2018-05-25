// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    cin>>n;
    LL ara[50][50];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ara[i][j];
        }
    }
    cout<<n<<"\n";
    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
            cout<<1<<" "<<1<<" "<<n<<"\n";
        }
        else if(i==n-1)
        {
            cout<<i<<" "<<i<<" "<<n-2<<"\n";
        }
        else
        {
            cout<<i<<" "<<i<<" "<<n-1<<"\n";
        }
    }
}
