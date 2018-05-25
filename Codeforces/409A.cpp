#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,n,x=0,y=0,z;
    cin>>a>>b;
    for(i=0;i<a.length();i+=2)
    {
        if(a[i]=='8')
        {
            if(b[i]=='[')
            {
                x++;
            }
            else if(b[i]=='(')
            {
                y++;
            }
        }
        if(a[i]=='(')
        {
            if(b[i]=='8')
            {
                x++;
            }
            else if(b[i]=='[')
            {
                y++;
            }
        }
        if(a[i]=='[')
        {
            if(b[i]=='(')
            {
                x++;
            }
            else if(b[i]=='8')
            {
                y++;
            }
        }
    }
    if(x>y)
    {
        cout<<"TEAM 1 WINS";
    }
    else if(x<y)
    {
        cout<<"TEAM 2 WINS";
    }
    else
    {
        cout<<"TIE";
    }
}
