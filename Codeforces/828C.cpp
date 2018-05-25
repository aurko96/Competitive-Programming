// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
pair<int,int>pp[100005];
vector<int>vv[100005];
map<int,int>mp;
char str2[2000005];
int main()
{
    string str[100005];
    int n;
    cin>>n;
    int x,y,z;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        x=str[i].size();
        pp[i].first=x;
        pp[i].second=i;
        cin>>y;
        for(int j=0;j<y;j++)
        {
            cin>>z;
            vv[i].push_back(z);
        }
    }
    sort(pp,pp+n);
    reverse(pp,pp+n);
//    for(int i=0;i<n;i++) cout<<pp[i].first<<" "<<pp[i].second<<endl;
//    cout<<endl;
            int bb;
            int mx=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<vv[pp[i].second].size();j++)
        {
            if(mp[vv[pp[i].second][j]]==1) continue;
                bb=vv[pp[i].second][j];
            for(int k=0;k<pp[i].first;k++)
            {
                str2[bb-1]=str[pp[i].second][k];
               //cout<<str[pp[i].second][k]<<" "<<str2[bb-1]<<endl;
               // cout<<pp[i].second<<" "<<bb-1<<endl;
                bb++;
                mx=max(mx,bb-1);
            }
            mp[vv[pp[i].second][j]]=1;
        }
    }
    for(int i=0;i<mx;i++)
    {
        if(str2[i]=='\0') cout<<'a';
        else cout<<str2[i];
    }
}
