#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10005],i,j,n,x,y,z,p,q,r,s,t,ans,mx,mn;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    p=a[2]-a[1];
    q=a[1]-a[0];
    cout<<p+q;
}
