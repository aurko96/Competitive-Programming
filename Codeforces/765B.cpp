#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char>vect;
    map<char,int>mp;
    int i,j,n,x,y,z;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(mp[str[i]]==0)
        {
            vect.push_back(str[i]);
            mp[str[i]]++;
        }
    }
    int flag=0;
    if(vect[0]!='a') flag=1;
    for(i=0;i<vect.size()-1;i++)
    {
        if(vect[i+1]-vect[i]!=1) flag=1;
    }
    if(flag) cout<<"NO\n";
    else cout<<"YES\n";
}
