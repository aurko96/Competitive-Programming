// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    string str;
    map<char,LL>mp;
    cin>>n>>str;
    mp['D']=mp['R']=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='D')
        {
            mp['D']++;
        }
        else if(str[i]=='R')
        {
            mp['R']++;
        }
    }
    LL count1=0,count2=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='D')
        {
            if(count1==mp['D']){ count2=0; continue; }
            count1++;
            mp['R']--;
            count2=0;
        }
        else if(str[i]=='R')
        {
            if(count2==mp['R']){count1=0; continue; }
            count2++;
            mp['D']--;
            count1=0;
        }
    }
    if(mp['D']<=0 || mp['R']>mp['D']) cout<<'R';
    else if(mp['R']<=0 || mp['D']>mp['R']) cout<<'D';
    else if(mp['R']==mp['D'])
    {
        if(count1==mp['D'])
        {
            cout<<'R';
        }
        else if(count2==mp['R'])
        {
            cout<<'D';
        }
    }
}
