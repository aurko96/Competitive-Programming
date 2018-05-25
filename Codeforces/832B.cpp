// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
unordered_map<char,int>mp;
vector<int>vv;
unordered_map<int,int>mp2;
int main()
{
    FastRead
    string str,str2,str3[100002];
    cin>>str>>str2;
    LL n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>str3[i];
    for(int i=0;i<str.size();i++) mp[str[i]]=1;
    LL x=-1,y,z;
    for(int i=0;i<str2.size();i++)
    {
        if(str2[i]=='?') mp2[i]=1;
        else if(str2[i]=='*')
        {
            x=i;
        }
    }
    bool flag=0;
    int k;
    for(int i=0;i<n;i++)
    {
       // cout<<"bbbb  2   "<<str3[i].size()<<endl;
        flag=0;
        if(x==-1)
        {
            if(str3[i].size()!=str2.size())
            {
                cout<<"NO\n";
                continue;
            }
        }
        else
        {
            if(str3[i].size()<str2.size()-1)
            {
                cout<<"NO\n";
                continue;
            }
        }
        for(int j=0,p=0;j<str3[i].size();j++,p++)
        {
            //cout<<"hii\n";
            if(mp2[p]==1)
            {
               // cout<<"Hello  "<<j<<endl;
                if(mp[str3[i][j]]!=1) flag=1;
            }
            if(x==p)
            {
                //cout<<"hello222\n";
                y=str2.size()-x-1;
                z=str3[i].size()-y-1;
                if(y<0 || z<0)
                {
                    //p++;
                    j--;
                    //cout<<j<<" "<<p<<endl;
                    continue;
                }
                for(k=j;k<=z;k++)
                {
                    if(mp[str3[i][k]]==1) flag=1;
                }
                //cout<<k<<" "<<p<<endl;
                if(k>j)
                {
                    j=k-1;
                    //p=k;
                }
                else j--;
                //p++;
                //cout<<"bpp = "<<x<<" "<<y<<" "<<z<<" "<<j<<" "<<p<<endl;
                continue;
            }
            if(str3[i][j]>=97 && str3[i][j]<=122)
            {
                if(str2[p]>=97 && str2[p]<=122)
                {
                    if(str3[i][j]!=str2[p])
                    {
                       // cout<<"helooo  "<<j<<" "<<p<<endl;
                        flag=1;
                    }
                }
            }

            //p++;
        }
        if(flag) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
