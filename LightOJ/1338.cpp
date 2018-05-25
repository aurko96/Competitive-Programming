#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    for(int i=1;i<=t;i++)
    {
        bool flag=0;
        map<char,int>mp;
        string str,str2;
        getline(cin,str);
        getline(cin,str2);
        for(int j=0;j<str.size();j++)
        {
            if(str[j]>=97 && str[j]<=122) str[j]-=32;
        }
        for(int j=0;j<str2.size();j++)
        {
            if(str2[j]>=97 && str2[j]<=122) str2[j]-=32;
        }
        //cout<<str<<" "<<str2<<endl;
        //cout<<str.size()<<endl<<str2.size()<<endl;
        for(int j=0;j<str.size();j++)
        {
            if(str[j]!=' ') mp[str[j]]++;
        }
        for(int j=0;j<str2.size();j++)
        {
            //cout<<mp[str2[j]]<<endl;
            if(str2[j]!=' ') mp[str2[j]]--;
        }
        for(int j=0;j<str.size();j++)
        {
            if(str[j]!=' ')
            {
                if(mp[str[j]]!=0) flag=1;
            }
        }
        if(flag) cout<<"Case "<<i<<": No\n";
        else cout<<"Case "<<i<<": Yes\n";
    }
}
