#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL ara[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,q;
        int a,b,c,d;
        cin>>n>>q;
        for(int j=0;j<n;j++) cin>>ara[j];
        for(int j=0;j<q;j++)
        {
            vector<int>v1,v2;
            int cnt=0;
            cin>>a>>b>>c>>d;
            int x,y;
            for(int k=a-1,p=c-1;k<b;k++,p++)
            {
                v1.push_back(ara[k]);
                v2.push_back(ara[p]);
            }
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            for(int k=0;k<v1.size();k++)
            {
                if(v1[k]!=v2[k]) cnt++;
            }
            if(cnt>1) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
}
