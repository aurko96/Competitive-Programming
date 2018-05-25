#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int a[10005],sum=0,i,j,n,x,y,z;
    memset(a,0,sizeof(a));
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        a[x]++;
        a[y]++;
    }
    for(i=1;i<=n;i++)
    {
        sum=sum+((a[i]*(a[i]-1))/2);
    }
    cout<<sum<<endl;
    //main();
}
