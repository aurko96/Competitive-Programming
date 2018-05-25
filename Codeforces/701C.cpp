#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[2000],i,j,n,x,y,z;
    int take[2000];
    string str;
    cin>>n>>str;
    set<char>st;
    for(i=0;i<str.size();i++)
    {
        ara[str[i]]=1;
        //cout<<(int)str[i]<<endl;
        st.insert(str[i]);
    }
    x=st.size();
    i=-1;
    j=-1;
    int cnt=0,mn=2e9;
    while(1)
    {
        if(cnt<x)
        {
           j++;
           //cout<<j<<endl;
           if(j==n) break;
           if(take[str[j]]==0) cnt++;
           take[str[j]]++;
        }
        else
        {
            mn=min(mn,j-i);
            //cout<<j<<" "<<i<<" "<<mn<<endl;
            i++;
            if(i==n) break;
            take[str[i]]--;
            if(take[str[i]]==0) cnt--;
        }
    }
    cout<<mn<<"\n";
}
