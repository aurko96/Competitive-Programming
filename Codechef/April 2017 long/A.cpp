#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int i,j,n,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        string str;
        mp.clear();
        int cnt=0;
        for(j=0;j<4;j++)
        {
            cin>>str;
            mp[str]++;
        }
        for(j=0;j<4;j++)
        {
            cin>>str;
            if(mp[str]==1) cnt++;
        }
        if(cnt>=2) cout<<"similar\n";
        else cout<<"dissimilar\n";
    }
}
