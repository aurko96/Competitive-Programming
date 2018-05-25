#include<bits/stdc++.h>
using namespace std;
int main()
{
    string b,a="qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    long long i,j,n,x,y,z;
    cin>>ch>>b;
    if(ch=='R')
    {
        for(i=0,j=0;j<b.size();i++)
        {
            if(b[j]==a[i])
            {
                cout<<a[i-1];
                j++;
                i=-1;
            }
        }
    }
    else if(ch=='L')
    {
        for(i=0,j=0;j<b.size();i++)
        {
            if(b[j]==a[i])
            {
                cout<<a[i+1];
                j++;
                i=-1;
            }
        }
    }
}
