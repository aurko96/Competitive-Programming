#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,y;
    string ans,str,prime_factor[]={"","","2","3","322","5","53","7","7222","7332"};
    cin>>n>>str;
    for(i=0;i<str.size();i++)
    {
       ans+=prime_factor[str[i]-48];
    }
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
}
