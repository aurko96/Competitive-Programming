#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int i,j,n,x=0,y,count=0;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]!='_') count=1;
        else if(str[i]=='_')
        {
            x+=count;
            count=0;
        }
    }
    x+=count;
    cout<<x<<"\n";
}
