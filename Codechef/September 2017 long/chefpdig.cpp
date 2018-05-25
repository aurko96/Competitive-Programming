#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    FastRead
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int mp[15];
        int ara[15];
        memset(ara,0,sizeof(ara));
        memset(mp,0,sizeof(mp));
        string str,str2;
        cin>>str;
        for(int j=0;j<str.size();j++)
        {
            int x;
            x=(int)str[j]-'0';
            //cout<<x<<endl;
            mp[x]++;
        }
        for(int j=65;j<=90;j++)
        {
            int f,l;
            l=j%10;
            f=j/10;
            ara[l]++;
            ara[f]++;
            if(mp[l]>=ara[l] && mp[f]>=ara[f])
            {
                str2+=(char)j;
            }
            ara[l]--;
            ara[f]--;
        }
        cout<<str2<<"\n";
    }
}
