#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,j,n,x=0,y,z,count=1;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y')
        {
            count=1;
        }
        else
        {
            count++;
        }
        x=max(x,count);
    }
    cout<<x<<"\n";
}
