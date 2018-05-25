#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,n,x,y=0,z;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(i==0)
        {
            x=abs((s[i]-96)-1);
            if(x>13)
            {
                x=abs(26-x);
            }
            y+=x;
        }
        else
        {
            x=abs((s[i]-96)-(s[i-1]-96));
            if(x>13)
            {
                x=abs(26-x);
            }
            y+=x;
        }
    }
    cout<<y<<"\n";
}
