#include<bits/stdc++.h>
#define LL long long
using namespace std;
string str[100005],str2,str3;
map<LL,string>mp;
string call(LL n)
{
    if(n==2)
    {
        str[2]+="101";
        return str[2];
    }
    else if(n==3)
    {
        str[3]+="111";
        return str[3];
    }
    if(str[n]!='\0') return str[n];
    call(n/2);
    if(n%2==0)
    {
        str2.clear();
        str2=str[n];
        str[n]+='0';
        str[n]+=str2;
    }
    else
    {
        str2.clear();
        str2=str[n];
        str[n]+='1';
        str[n]+=str2;
    }
    return str[n];
   // cout<<str<<endl;
}
int main()
{
    cout<<mp[1];
    LL i,j,n,x,y,z;
    cin>>n>>x>>y;
    LL cnt=0;
    call(n/2);
    if(n%2==0)
    {
        str3=str;
        str.push_back('0');
        str+=str3;

    }
    else
    {
        str3=str;
        str.push_back('1');
        str+=str3;
    }
    //cout<<str<<"\n";
    for(i=x-1;i<y;i++)
    {
        if(str[i]=='1') cnt++;
    }
    cout<<cnt<<"\n";
}
