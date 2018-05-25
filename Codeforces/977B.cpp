#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str,str2;
    cin>>str;
    int mx=0;
    map<string,int>mp;
    for(int i=0;i<n-1;i++)
    {
        str2+=str[i];
        str2+=str[i+1];
        //cout<<str2<<endl;
        mp[str2]++;
        mx=max(mx,mp[str2]);
        str2.clear();
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==mx)
        {
            cout<<it->first<<"\n";
            break;
        }
    }
}
