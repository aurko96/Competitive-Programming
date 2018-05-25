#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        LL ara[100005],sum[100005];
        LL ans=-1e9,calc=0,x,y,z,cnt=0,ii=-1,prev=1e9;
        for(int j=0;j<n;j++) cin>>ara[j];
        sort(ara,ara+n);
        reverse(ara,ara+n);
        sum[0]=ara[0];
        for(int j=1;j<n;j++) sum[j]=ara[j]+sum[j-1];
//        for(int j=0;j<n;j++) cout<<sum[j]<<" ";
//        cout<<endl;
        for(int j=0;j<n;j++)
        {
            calc=sum[j]*(j+1);
            if(calc>ans)
            {
                ans=calc;
            }
            else
            {
                ans+=(sum[j]-sum[j-1]);
            }
        }
        cout<<ans<<"\n";

    }

}
