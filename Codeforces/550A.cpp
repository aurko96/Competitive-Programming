#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,j,n,x,y=0,z=0;
    cin>>a;
    x=a.size();
    for(i=0;i<x-1;i++)
    {
        if(a[i]=='A' && a[i+1]=='B')
        {
            y=1;
            i+=2;
        }
        if(a[i]=='B' && a[i+1]=='A')
        {
            z=1;
            i+=2;
        }
        if((y+z)==2)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
