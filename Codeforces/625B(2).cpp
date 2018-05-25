#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x,y,count=0;
    string a,b,c;
    cin>>a>>b;
    x=a.size();
    y=b.size();
    for(i=0;i<x-y+1;i++)
    {
        c=a.substr(i,y);
        if(c==b)
        {
            count++;
            i=i+y-1;
        }
    }
    cout<<count;
}
