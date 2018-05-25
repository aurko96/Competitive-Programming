#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j,n,x,y,z,flag=0,count=0;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            count++;
        }
        else if(s[i]==')')
        {
            if(count>0)
            {
                count--;
                flag++;
            }
        }
    }
    cout<<flag*2;
}
