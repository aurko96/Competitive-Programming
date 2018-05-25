#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1,str2;
    map<string,int>mp[5];
    char ch;
    int i,j,n,x;
    cin>>n;
    cin>>str;
    for(i=0;i<n;i++)
    {
        str1.clear();
        str2.clear();
        for(j=0;j<8;j++)
        {
            cin>>ch;
            if((ch!='-' && ch!='>') && j<3) str1+=ch;
            else if((ch!='-' && ch!='>') && j>=3) str2+=ch;
        }
        //cout<<str1<<" "<<str2<<endl;
        mp[1][str1]++;
        mp[2][str2]++;
    }
    if(mp[1][str]==mp[2][str]) cout<<"home\n";
    else cout<<"contest\n";
}
