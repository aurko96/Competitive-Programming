// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
//map<int,int>mp;
int mp[1000001];
//pair<int,int>pr[300005];
int pr1[300005],pr2[300005];
int main()
{
    FastRead
    int i,j,n,m,k,x,y,z;
    cin>>n>>m>>k;
    int p;
    for(i=0;i<m;i++)
    {
        cin>>p;
        mp[p]=1;
    }
    z=1;
    int ans=0,ans2=0;
    if(mp[1]==1) ans2=1;
    for(i=0;i<k;i++)
    {
        cin>>pr1[i]>>pr2[i];
    }
    for(i=0;i<k;i++)
    {
        if(pr1[i]==z)
        {
            if(mp[pr2[i]]==1)
            {
                ans=pr2[i];
                z=pr2[i];
                break;
            }
            else z=pr2[i];
        }
        else if(pr2[i]==z)
        {
            if(mp[pr1[i]]==1)
            {
                ans=pr1[i];
                z=pr1[i];
                break;
            }
            else z=pr1[i];
        }
    }
    if(ans2!=0) cout<<1<<"\n";
    else if(ans==0) cout<<z<<"\n";
    else cout<<ans<<"\n";
}
