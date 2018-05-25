#include<bits/stdc++.h>
#define LL long long
using namespace std;
map<string,int>mp;
int main()
{
    int i,j,n,x,y,z;
    string str[100005];
    cin>>n;
    for(i=0;i<n;i++) cin>>str[i];
    for(i=0;i<n;i++)
    {
        if(mp[str[i]]==0)
        {
            cout<<"OK"<<"\n";
            mp[str[i]]++;
        }
        else
        {
            cout<<str[i]<<mp[str[i]]<<"\n";
            mp[str[i]]++;
        }
    }
}
