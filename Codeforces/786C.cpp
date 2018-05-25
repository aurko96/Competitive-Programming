#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,k,n,x,y,z;
    cin>>n>>k>>x;
    LL mn1=1e12,mn2=1e12,mn=1e12;
    LL mx1=0,mx2=0,mx=0;
    LL ara[100005],ara2[100005];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mn=min(mn,ara[i]);
        mx=max(mx,ara[i]);
    }
    if(k==0)
    {
        cout<<mx<<" "<<mn<<"\n";
        return 0;
    }
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            y=ara[i]^x;
            ara2[i]=y;
        }
        else
        {
            ara2[i]=ara[i];
        }
       // cout<<i<<" "<<ara2[i]<<endl;
       mn2=min(mn2,ara2[i]);
       mx2=max(mx2,ara2[i]);
    }
   // for(i=0;i<n;i++) cout<<ara2[i]<<" ";
    sort(ara2,ara2+n);
    //cout<<n<<endl;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            y=ara2[i]^x;
            ara[i]=y;
        }
        else
        {
            ara[i]=ara2[i];
        }
        mn1=min(mn1,ara[i]);
        mx1=max(mx1,ara[i]);
    }
    if(k%2==0)
    {
        cout<<mx1<<" "<<mn1<<"\n";
    }
    else
    {
        cout<<mx2<<" "<<mn2<<"\n";
    }
}
