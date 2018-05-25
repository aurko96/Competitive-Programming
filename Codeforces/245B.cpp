#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,n,x,y,z;
    cin>>a;
    if(a[3]=='p')
    {
        a.insert(4,"://");
    }
    else if(a[2]=='p')
    {
        a.insert(3,"://");
    }
    x=a.size();
    for(i=x-1;i>=0;i--)
    {
        if(a[i]=='u' && a[i-1]=='r' && i==x-1)
        {
            a.insert(i-1,".");
            cout<<a;
            return 0;
        }
        else if(a[i]=='u' && a[i-1]=='r')
        {
            a.insert(i-1,".");
            a.insert(i+2,"/");
            cout<<a;
            return 0;
        }
    }
}
