#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
unordered_map<char,int>mp,mp2;
int main()
{
    FastRead
    int n;
    cin>>n;
    int mx=-1,cnt=0,ans=0;
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        char ch;
        string str;
        cin>>ch>>str;
        mp2.clear();
        if(ch=='!')
        {
            if(cnt==1 && flag==1)
            {
                ans++;
                continue;
            }
            flag=1;
            for(int j=0;j<str.size();j++)
            {
                if(mp2[str[j]]==1) continue;
                if(mp[str[j]]==-1) continue;
                mp[str[j]]++;
                if(mp[str[j]]>mx)
                {
                    cnt=1;
                    mx=mp[str[j]];
                }
                else if(mp[str[j]]==mx) cnt++;
                mp2[str[j]]=1;
            }
        }
        else if(ch=='.')
        {
            if(cnt==1) continue;
            for(int j=0;j<str.size();j++)
            {
                if(mp[str[j]]==-1) continue;
                if(mp2[str[j]]==1) continue;
                if(mp[str[j]]==mx)
                {
                    if(cnt>1) cnt--;
                    mp[str[j]]=-1;
                }
                else mp[str[j]]=-1;
                mp2[str[j]]=1;
            }
        }
        else if(ch=='?')
        {
            if(cnt==1 && flag==1 && i!=n-1)
            {
                ans++;
                //continue;
            }
            if(i<n-1)
            {
                if(mp[str[0]]==mx) if(cnt>1) cnt--;
                mp[str[0]]=-1;
            }
        }
        cout<<"cnt = "<<cnt<<endl;
    }
    cout<<ans<<"\n";
}
