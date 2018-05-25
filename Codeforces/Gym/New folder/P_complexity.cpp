#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    int i,j,n,x,y=0,count=0;
    vector<int>vect;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        mp[str[i]]++;
    }
    for(i=97;i<=122;i++)
    {
        if(mp[i]>0)
        {
            count++;
            vect.push_back(mp[i]);
        }
    }
    sort(vect.begin(),vect.end());
    if(count<=2) cout<<0<<"\n";
    else
    {
        x=count-2;
        for(i=0;i<x;i++)
        {
            y+=vect[i];
        }
        cout<<y<<"\n";
    }
}
