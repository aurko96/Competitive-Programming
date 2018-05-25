#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    string s1,s2;
    int i,j,n,x,y,z,count=0;
    cin>>s1>>s2;
    for(i=0;i<s1.size()-1;i++)
    {
        if(s1[i]=='0') count++;
        else break;
    }
    s1.erase(0,count);
    count=0;
    for(i=0;i<s2.size()-1;i++)
    {
        if(s2[i]=='0') count++;
        else break;
    }
    s2.erase(0,count);
    //cout<<s1<<endl<<s2<<endl;
    if(s1.size()>s2.size()) cout<<">";
    else if(s1.size()<s2.size()) cout<<"<";
    else if(s1.size()==s2.size())
    {
        if(s1>s2) cout<<">";
        else if(s1<s2) cout<<"<";
        else cout<<"=";
    }
}
