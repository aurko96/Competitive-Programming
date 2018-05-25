// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;


int main()
{
    int n,ara[5000];
    cin>>n;
    int one=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]==1) one++;
    }
    if(one>0)
    {
        cout<<n-one<<"\n";
        return 0;
    }
    int x,mn=INT_MAX;
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        x=ara[i];
        for(int j=i+1;j<n;j++)
        {
            x=__gcd(x,ara[j]);
            if(x==1)
            {
                flag=1;
                mn=min(mn,j-i);
            }
        }
    }
    if(flag) cout<<mn+(n-1)<<"\n";
    else cout<<-1<<"\n";
}
