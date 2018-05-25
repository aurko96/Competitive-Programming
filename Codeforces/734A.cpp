#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,x=0,y=0,z;
    string str;
    cin>>n;
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]=='A')
        {
            x++;
        }
        else if(str[i]=='D')
        {
            y++;
        }
    }
    if(x>y)
    {
        cout<<"Anton";
    }
    else if(y>x)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
}
