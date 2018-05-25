#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y,z;
    string str;
    cin>>n>>str;
    if(n%4!=0){ cout<<"==="; return 0; }
    x=n/4;
    map<char,int>mp;
    mp['A']=mp['G']=mp['C']=mp['T']=x;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='?') continue;
        mp[str[i]]--;
    }
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='?')
        {
            if(mp['A']>0)
            {
                str[i]='A';
                mp['A']--;
            }
            else if(mp['G']>0)
            {
                str[i]='G';
                mp['G']--;
            }
            else if(mp['C']>0)
            {
                str[i]='C';
                mp['C']--;
            }
            else if(mp['T']>0)
            {
                str[i]='T';
                mp['T']--;
            }
        }
    }
    if( mp['A'] || mp['G'] || mp['C'] || mp['T']) cout<<"===";
    else cout<<str;
}
