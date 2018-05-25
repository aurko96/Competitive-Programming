#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,n,m,x,y,z,up=0,down=0,left=0,right=0;
    cin>>s;
    m=s.size();
    if(m%2!=0)
    {
        cout<<-1;
        return 0;
    }
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='U')
        {
            up++;
        }
        else if(s[i]=='D')
        {
            down++;
        }
        else if(s[i]=='R')
        {
            right++;
        }
        else if(s[i]=='L')
        {
            left++;
        }
    }
    x=abs(right-left);
    y=abs(up-down);
    z=(x+y)/2;
    cout<<z<<"\n";
}
