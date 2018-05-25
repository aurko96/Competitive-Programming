#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    //string str2={'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'}
    map<char,int>mp;
    mp['A']=1;
    mp['H']=1;
    mp['I']=1;
    mp['M']=1;
    mp['O']=1;
    mp['T']=1;
    mp['U']=1;
    mp['V']=1;
    mp['W']=1;
    mp['X']=1;
    mp['Y']=1;
    int i,j,n,x,y,z,p;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>str;
        bool flag=0;
        if(str.size()%2==0) z=str.size()/2;
        else
        {
            z=str.size()/2;
            z++;
        }
        for(j=0,p=str.size()-1;j<z;j++,p--)
        {

           // cout<<str[j]<<" ";
            if(str[j]!=str[p]) flag=1;
            if(mp[str[j]]!=1 || mp[str[p]]!=1) flag=1;
        }
        //cout<<endl;
        if(flag) cout<<"no\n";
        else cout<<"yes\n";
    }
}
