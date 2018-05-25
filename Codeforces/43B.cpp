#include<bits/stdc++.h>
int a[300];
using namespace std;
int main()
{
    string c,d;
    int i,j,n,x,y,z,p,q,count=0;
    getline(cin,c);
    getline(cin,d);
    x=c.size();
    y=d.size();
    for(i=0;i<x;i++)
    {
        p=c[i];
        a[p]++;
    }
    for(i=0;i<y;i++)
    {
        q=d[i];
        if(a[q]>=1)
        {
            a[q]--;
            count++;
        }
        else if(d[i]==32)
        {
            count++;
        }
    }
    if(count==y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
