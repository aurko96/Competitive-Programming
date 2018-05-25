#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        map<char,int>mp;
        cin>>n;
        cin>>str;
        for(int j=0;j<n;j++)
        {
            mp[str[j]]++;
        }
        if(mp['A']==n) cout<<"Case "<<i<<": ABANDONED\n";
        else if((mp['B']+mp['A'])==n) cout<<"Case "<<i<<": BANGLAWASH\n";
        else if((mp['W']+mp['A'])==n) cout<<"Case "<<i<<": WHITEWASH\n";
        else if(mp['B']==mp['W']) cout<<"Case "<<i<<": DRAW "<<mp['B']<<" "<<mp['T']<<"\n";
        else if(mp['B']>mp['W']) cout<<"Case "<<i<<": BANGLADESH "<<mp['B']<<" - "<<mp['W']<<"\n";
        else if(mp['B']<mp['W']) cout<<"Case "<<i<<": WWW "<<mp['W']<<" - "<<mp['B']<<"\n";

    }
}
