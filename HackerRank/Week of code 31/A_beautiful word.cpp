#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,n,x=0,y;
    cin>>str;
    for(i=0;i<str.size()-1;i++)
    {
        if(str[i]==str[i+1]) x=1;
        else if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')&&(str[i+1]=='a'||str[i+1]=='e'||str[i+1]=='i'||str[i+1]=='o'||str[i+1]=='u'||str[i+1]=='y')) x=1;

    }
    if(x) cout<<"No\n";
    else cout<<"Yes\n";
}
