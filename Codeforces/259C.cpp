#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,n,x=0;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='0')
        {
            str.erase(i,1);
            x=1;
            break;
        }
    }
    if(x==0) str.erase(str.begin());
    cout<<str<<"\n";
}
