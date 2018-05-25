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
    for(int j=0; j<t; j++)
    {
        int n,m,x;
        cin>>n>>m;
        LL sum=0;
        map<int,int>mp,mp2,mp3;
        int ara[20005],ara2[20005];
        for(int i=0; i<n; i++)
        {
            cin>>ara[i];
            mp[ara[i]]++;
        }
        for(int i=0; i<m; i++)
        {
            cin>>ara2[i];
            mp2[ara2[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            x=ara[i];
            if(mp3[x]==1) continue;
            sum+=abs(mp[x]-mp2[x]);
            mp3[x]=1;
        }
        for(int i=0;i<m;i++)
        {
            x=ara2[i];
            if(mp3[x]==1) continue;
            sum+=abs(mp[x]-mp2[x]);
            mp3[x]=1;
        }
        cout<<sum<<"\n";
    }


}
