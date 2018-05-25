#include<bits/stdc++.h>
#define LL long long
#define endl "\n"
using namespace std;
LL ara[100005],ara2[100005],ara3[100005],ans;
LL sum[100005],sum2[100005],sum3[100005],mod=1000000007;
int b_s(int low,int high,LL x,LL ara[100005])
{
    int mid,val=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(ara[mid]<=x && ara[mid+1]>x)
        {
            val=mid;
            break;
        }
        else if(ara[mid]>x) high=mid-1;
        else low=mid+1;
    }
    if(val==-1)
    {
        if(ara[high]<=x) return high;
        else return -1;
    }
    else return val;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int p,q,r;
        cin>>p>>q>>r;
        ans=0;
        for(int j=0;j<p;j++) cin>>ara[j];
        for(int j=0;j<q;j++) cin>>ara2[j];
        for(int j=0;j<r;j++) cin>>ara3[j];
        sort(ara,ara+p);
        //sort(ara2,ara2+q);
        sort(ara3,ara3+r);
        sum[0]=ara[0];
        //sum2[0]=ara2[0];
        sum3[0]=ara3[0];
        for(int j=1;j<p;j++) sum[j]=(ara[j]+sum[j-1])%mod;
        //for(int j=1;j<q;j++) sum2[j]=ara2[j]+sum2[j-1];
        for(int j=1;j<r;j++) sum3[j]=(ara3[j]+sum3[j-1])%mod;

//        for(int j=0;j<p;j++) cout<<sum[j]<<" ";
//        cout<<endl;
//        for(int j=0;j<r;j++) cout<<sum3[j]<<" ";
//        cout<<endl;
        for(int j=0;j<q;j++)
        {
            LL x,y,z;
            LL vv=0,ww=0,mul;
            x=ara2[j];
            y=b_s(0,p-1,x,ara);
            z=b_s(0,r-1,x,ara3);
            //cout<<y<<" "<<z<<endl;
            if(y!=-1) vv=(sum[y]+(x*(y+1)))%mod;
            if(z!=-1) ww=(sum3[z]+(x*(z+1)))%mod;
            mul=(vv*ww)%mod;
            ans+=(mul%mod);
        }
        cout<<ans%mod<<"\n";
    }
}
