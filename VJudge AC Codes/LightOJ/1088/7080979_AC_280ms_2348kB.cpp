#include<bits/stdc++.h>
#define debug cout<<"debug"
using namespace std;
int main()
{
    long long i,j,t,m,n,k,x,y,z,high,low,mid,a[100005],p,q,r;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld",&n,&m);
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
        }
        printf("Case %lld:\n",i);
        for(k=1;k<=m;k++)
        {
            scanf("%lld %lld",&x,&y);
            low=0;
            high=n-1;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(a[mid]==x)
                {
                    low=mid;
                    break;
                }
                else if(a[mid]<x)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
                //debug<<1<<endl;
            }
            p=low;
            low=0;
            high=n-1;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(a[mid]<=y)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
                //debug<<2<<endl;
            }
            q=low;
            r=q-p;
            //cout<<"q= "<<q<<" "<<"p= "<<p<<endl;
            printf("%lld\n",r);
        }
    }
}
