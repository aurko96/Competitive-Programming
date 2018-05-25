#include<bits/stdc++.h>
using namespace std;
int occur[200005],in[200005],out[200005],sum[200005];
void calc(int mn,int mx,int k)
{
    for(int i=1;i<=200002;i++)
    {
        occur[i]+=occur[i-1]+(in[i]-out[i]);
        if(occur[i]>=k) sum[i]=sum[i-1]+1;
        else sum[i]=sum[i-1];
    }
}
int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    int x,y,mn=2e6,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        mn=min(mn,min(x,y));
        mx=max(mx,max(x,y));
        in[x]++;
        out[y+1]++;
    }
    calc(mn,mx,k);
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        cout<<(sum[y]-sum[x-1])<<"\n";
    }
}
