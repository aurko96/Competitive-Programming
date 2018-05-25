#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    FastRead
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        bool flag=0;
        int n,ara[500];
        cin>>n;
        for(int j=0;j<n;j++) cin>>ara[j];
        sort(ara,ara+n);
        if(ara[0]==1)
        {
            cout<<"YES\n";
            continue;
        }
        int x=0;
        for(int j=0;j<n;j++)
        {
            x=__gcd(x,ara[j]);
        }
        if(x==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
