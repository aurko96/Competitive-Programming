#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int i,j,n,x,cnt1=0,cnt2=0,flag=0;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            cnt1++;
        }
        if(str[i]==')')
        {
            cnt2++;
            if(cnt2>cnt1)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag) cout<<"IMPOSSIBLE\n";
    else
    {
        while(cnt2<cnt1)
        {
            str+=')';
            cnt2++;
        }
        cout<<str<<"\n";
    }
}
