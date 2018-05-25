#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
vector<char>st;
map<char,int>::iterator iter;
int main()
{
    int i,j,n,x,y,z,flag=0,count=0;
    char ch;
    cin>>n;
    x=n;
    string str;
    for(i=0;i<x;i++)
    {
        cin>>str;
        st.push_back(str[0]);
        if(i>0)
        {
            if(st[i]==st[i-1])
            {
                st.pop_back();
                i--;
                x--;
            }
        }
    }
    for(i=0;i<st.size();i++)
    {
        mp[st[i]]++;
        if(mp[st[i]]>1) flag=1;
    }
    if(flag)
    {
        cout<<"Impossible";
        return 0;
    }

    for(i=97,j=0;i<=122;i++)
    {
        ch=st[j];
        if(i==ch && j<st.size())
        {
            cout<<st[j];
            j++;
            i=96;
        }
        else if(mp[i]==0)
        {
            mp[i]=2;
            cout<<(char)i;
        }
    }

}
