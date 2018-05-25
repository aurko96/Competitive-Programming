#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL n,p;
pair<LL,LL>pp[100005];
bool calc(double time)
{
    double power=p*time;
    for(int i=0;i<n;i++)
    {
        double need;
        need=(time*pp[i].first)-pp[i].second;
        if(need<0) need=0.0;
        power=power-need;
        if(power<0) return 0;
    }
    return 1;
}
int main()
{
    cin>>n>>p;
    LL sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>pp[i].first>>pp[i].second;
        sum+=pp[i].first;
    }
    if(p>=sum)
    {
        cout<<-1<<endl;
        return 0;
    }
    double low=0,high=1e11,mid,ans;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(calc(mid))
        {
            ans=mid;
            low=mid+0.000001;
        }
        else high=mid-0.000001;
    }
    cout<<fixed<<setprecision(6)<<ans<<endl;
}
