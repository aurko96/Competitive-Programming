#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[200],p[200];
    set<string>st;
    int i,j,n,x,y,t1=0,t2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    p[0]=s[0];
    for(i=1;i<n;i++)
    {
        if(s[i]!=p[0])
        {
            p[1]=s[i];
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(s[i]==p[0])
        {
            t1++;
        }
        else if(s[i]==p[1])
        {
            t2++;
        }
    }
    if(t1>t2)
    {
        cout<<p[0]<<endl;
    }
    else
    {
        cout<<p[1]<<endl;
    }

}
