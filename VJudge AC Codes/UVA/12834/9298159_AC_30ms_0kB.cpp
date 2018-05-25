#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        cin>>n>>k;
        LL ara[100005],ara2[100005],sum=0,x,y,z;
        vector<LL>prof;
        for(int j=0;j<n;j++) cin>>ara[j];
        for(int j=0;j<n;j++)
        {
            cin>>ara2[j];
            x=ara2[j]-ara[j];
            prof.push_back(x);
            sum+=x;
        }
        sort(prof.begin(),prof.end());
        y=0;
        for(int j=0;j<n;j++)
        {
            if(prof[j]<0 && y!=k)
            {
                y++;
                sum-=prof[j];
            }
            else break;
        }
        if(sum>0) cout<<"Case "<<i+1<<": "<<sum<<"\n";
        else cout<<"Case "<<i+1<<": No Profit\n";
    }
}
