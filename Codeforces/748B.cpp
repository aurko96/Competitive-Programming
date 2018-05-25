#include<bits/stdc++.h>
#define LL long long
using namespace std;
map<char,int>mp;
vector<pair<char,char> >vect;
int main()
{
    int i,j,n,x,y,z,flag=0;
    string str,str2;
    cin>>str>>str2;
    for(i=0;i<str.size();i++)
    {
        if(str[i]!=str2[i] && mp[str[i]]==0 && mp[str2[i]]==0)
        {
            x=str2[i];
            y=str[i];
            mp[str[i]]=x;
            mp[str2[i]]=y;
            vect.push_back(make_pair(str[i],str2[i]));
        }
        else if(str[i]!=str2[i] && (mp[str[i]]!=0 || mp[str2[i]]!=0))
        {
            x=str2[i];
            y=str[i];
            if(mp[str[i]]==x && mp[str2[i]]==y) continue;
            else flag=1;
        }
        else if(str[i]==str2[i])
        {
            x=str2[i];
            y=str[i];
            if(mp[str[i]]==0 && mp[str2[i]]==0)
            {
                mp[str[i]]=y;
                mp[str2[i]]=x;
            }
            else if(mp[str[i]]!=y || mp[str2[i]]!=x) flag=1;
        }
        //cout<<mp[str[i]]<<" "<<mp[str2[i]]<<" "<<flag<<endl;
    }
    if(flag) cout<<-1;
    else
    {
        cout<<vect.size()<<"\n";
        for(i=0;i<vect.size();i++)
        {
            cout<<vect[i].first<<" "<<vect[i].second<<"\n";
        }
    }
}
