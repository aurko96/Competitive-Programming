#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int n,k,m;
    cin>>n>>k>>m;
    string str[100005];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int ara[100005];
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[str[i]]=ara[i];
    }
    int a,b,c;
    int mn;
    for(int i=0;i<k;i++)
    {
        vector<int>vv;
        mn=INT_MAX;
        cin>>a;
        for(int j=0;j<a;j++)
        {
            cin>>b;
            vv.push_back(b-1);
            mn=min(mn,ara[b-1]);
        }
        for(int j=0;j<vv.size();j++)
        {
            mp[str[vv[j]]]=mn;
        }
    }
    string str2;
    LL sum=0;
    for(int i=0;i<m;i++)
    {
        cin>>str2;
        sum+=mp[str2];
    }
    cout<<sum<<"\n";
}
