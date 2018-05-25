// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
LL ara[200005],ara2[200005];
int main()
{
    FastRead
    LL i,n,x,p,sum=0;
    double y,z;
    memset(ara2,0,sizeof(ara2));
    cin>>n>>x;
    for(i=0;i<n;i++) cin>>ara[i];
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(ara[i]<x) y=1;
        else y=(double)ara[i]/x;
        //cout<<y<<endl;
        y=ceil(y);
        //cout<<y<<endl;
        p=(LL)y;
        while(1)
        {
            //cout<<" p = "<<p<<endl;
            if(ara2[p]==0)
            {
                ara2[p]=1;
                sum+=p;
                break;
            }
            p++;
        }
    }
    cout<<sum<<"\n";
}
