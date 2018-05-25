#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    string str;
    int i,j,n,x,y,z;
    cin>>str;
    n=str.size();
    if(str.size()>26) {cout<<"IMPOSSIBLE\n"; return 0;}
    for(i=0;i<str.size();i++)
    {
        mp[str[i]]++;
    }
    for(i=0;i<str.size();i++)
    {
        if(mp[str[i]]>1)
        {
            for(j=97;j<=122;j++)
            {
                if(mp[j]==0)
                {
                    mp[str[i]]--;
                    mp[j]++;
                    char ch=j;
                    str[i]=ch;
                }
            }
        }
    }
    if(str.size()==n) cout<<str<<"\n";
    else cout<<"IMPOSSIBLE\n";
}
