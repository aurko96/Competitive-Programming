#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y,z,flag=0;
    cin>>n>>x>>y;
    j=x*y;
    for(i=0;i<n;i++)
    {
        cin>>z;
        if(z>j) flag=1;
    }
    if(flag) cout<<"No\n";
    else cout<<"Yes\n";
}
