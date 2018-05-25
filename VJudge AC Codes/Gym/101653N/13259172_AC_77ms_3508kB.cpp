#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int ara[5000],mx=0;
        map<int,int>mp;
        vector<int>vv;
        for(int j=0;j<n;j++)
        {
            cin>>ara[j];
            if(mp[ara[j]]==0) vv.push_back(ara[j]);
            mp[ara[j]]++;
            mx=max(mx,mp[ara[j]]);

        }
        sort(vv.begin(),vv.end());
        for(int j=0;j<vv.size();j++)
        {
            if(mp[vv[j]]==mx)
            {
                cout<<vv[j]<<"\n";
                break;
            }
        }
    }
}
