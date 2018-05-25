#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int a[2000],i,n,x,y=0,z;
    getline(cin,str);
    for(i=0;i<str.length();i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            x=str[i];
            a[x]=1;
        }
    }
    for(i=97;i<=122;i++)
    {
        y=y+a[i];
    }
    cout<<y;
}
