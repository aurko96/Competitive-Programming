#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    int i,j,n,x=0,y=0;
    cin>>str>>str2;
    if(str.size()!=str2.size()){ cout<<"NO"; return 0; }
    for(i=0;i<str.size();i++)
    {
        if(x) break;
        if(str[i]=='1') x=1;
    }
    for(i=0;i<str2.size();i++)
    {
        if(y) break;
        if(str2[i]=='1') y=1;
    }
    if(!x^y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
