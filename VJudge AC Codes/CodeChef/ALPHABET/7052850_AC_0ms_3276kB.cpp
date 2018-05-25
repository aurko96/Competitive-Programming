#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
    string s,str[1002];
    int i,j,n,x,y,z,count=0;
    cin>>s>>n;
    for(i=0;i<s.size();i++)
    {
        a[s[i]]++;
    }
    for(i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<str[i].size();j++)
        {
            if(a[str[i][j]]==0)
            {
                count++;
            }
        }
        if(count)
        {
            cout<<"No"<<"\n";
            count=0;
        }
        else
        {
            cout<<"Yes"<<"\n";
        }
    }

}
