#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,x,y,count=0;
    cin>>a>>b;
    x=a.length();
    y=b.length();
    if(x<y)
    {
        cout<<"need tree";
        return 0;
    }
    for(i=0,j=0;i<x;i++)
    {
        if(a[i]==b[j])
        {
            j++;
        }
        if(j==y)
        {
            cout<<"automaton";
            return 0;
        }

    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(i=0,j=0;i<x;i++)
    {
        if(a[i]==b[i])
        {
            count++;
        }
        if(a[i]==b[j])
        {
            j++;
        }
    }
    if(count==x)
    {
        cout<<"array";
    }
    else if(j==y)
    {
        cout<<"both";
    }
    else
    {
        cout<<"need tree";
    }
}
