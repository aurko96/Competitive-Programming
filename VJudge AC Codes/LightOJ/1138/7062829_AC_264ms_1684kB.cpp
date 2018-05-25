#include<bits/stdc++.h>
using namespace std;
long long total_zero(long long n)
{
    long long x=0;
    while(n)
    {
        x=x+(n/5);
        n=n/5;
    }
    return x;
}
int main()
{
    long long i,j,t,n,x,y,z;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        long long low=1,high=1000000000,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(total_zero(mid)>=n)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        if(total_zero(low)!=n)
        {
            cout<<"Case "<<i<<": "<<"impossible"<<"\n";
        }
        else
        {
            cout<<"Case "<<i<<": "<<low<<"\n";
        }
    }
}
