#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str2;
    cin>>str>>str2;
    int i,j,n,x=0,y,z;
    string str3;
    for(i=0;i<str.size();i++)
    {
        if(str[i]>str2[i]) str3+=str2[i];
        else if(str[i]==str2[i])
        {
            if(str[i]=='z') str3+='z';
            else str3+=(str[i]+1);
        }
        else x=1;
    }
    if(x) cout<<-1<<"\n";
    else cout<<str3<<"\n";
}
