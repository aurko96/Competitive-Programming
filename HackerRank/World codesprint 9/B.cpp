#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
map<LL,int>mp;
int main()
{
    //FastRead
    LL i,j,n,x,y=0,ara[100005];
    string str;
    cin>>str;
    cin>>n;
    for(i=0;i<n;i++) cin>>ara[i];
    //sort(str.begin(),str.end());
    //cout<<str<<endl;
    mp[str[0]-96]=1;
    y=str[0]-96;
    //cout<<y<<endl;
    for(i=1;i<str.size();i++)
    {
        x=str[i]-96;
        if(str[i]==str[i-1])
        {
            y+=x;
            mp[y]=1;
        }
        else
        {
            y=x;
            mp[y]=1;
        }
    }
    cout<<str.size()<<endl;
    cout<<y<<endl;
    for(i=0;i<n;i++)
    {
        if(mp[ara[i]]) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
