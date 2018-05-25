#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    LL i,j,n,x,y,z;
    cin>>n;
    LL a[100005];
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>y;
        LL low=0,high=n-1,mid,ans=-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            //cout<<"mid = "<<mid<<"low = "<<low<<"high = "<<high<<endl;
            //cout<<y<<endl;
            if(y>=a[mid])
            {
               ans=mid;
               low=mid+1;
            }
            else high=mid-1;
        }
        cout<<ans+1<<"\n";
    }
}
