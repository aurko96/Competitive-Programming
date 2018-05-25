// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    map<char,char>mp;
    string str,str2,str3;
    cin>>str>>str2>>str3;
    for(int i=0;i<str.size();i++)
    {
        mp[str[i]]=str2[i];
        mp[str[i]-32]=str2[i]-32;
    }
    for(int i=0;i<str3.size();i++)
    {
        if(str3[i]>=48 && str3[i]<=57) cout<<str3[i];
        else cout<<mp[str3[i]];
    }
}
