#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ara[n+2];
    for(int i=0;i<n;i++) cin>>ara[i];
    sort(ara,ara+n);
    LL cnt=0,cnt2=0;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[ara[i]]++;
    }
    int x,y;
    bool flag=0;
    for(int i=0;i<n;)
    {

        x=mp[ara[i]];
        cnt+=x;
        y=ara[i];
        //cout<<i<<" "<<x<<" "<<cnt<<endl;
        i+=x;

        if(cnt==k)
        {
            flag=1;
            break;
        }
        if(cnt>k) break;

    }

    if(flag) cout<<y<<"\n";
    else
    {
        if(k==0 && mp[1]==0) cout<<1<<"\n";
        else cout<<-1<<"\n";
    }
}
