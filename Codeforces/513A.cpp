#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    if(c>1)
    {
        c=1;
    }
    if(d>1)
    {
        d=1;
    }
    for(i=1;;i++)
    {
        x=a-(c*i);
        if(x<=0)
        {
            break;
        }
        y=b-(d*i);
        if(y<=0)
        {
            break;
        }
    }
    if(x<=0)
    {
        cout<<"Second";
    }
    else if(y<=0)
    {
        cout<<"First";
    }
}
