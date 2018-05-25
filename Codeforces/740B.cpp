#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int a[10005],i,j,k,m,n,x,y,z[10005];
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    memset(z,0,sizeof(z));
    for(i=0,k=0;i<m;i++)
    {
        cin>>x>>y;
        for(j=x;j<=y;j++)
        {
            z[k]=z[k]+a[j];
        }
        k++;
    }
    int p=0;
    for(i=0;i<m;i++)
    {
        if(z[i]<0) continue;
        else p+=z[i];
    }
    cout<<p<<"\n";
}
