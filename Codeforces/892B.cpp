// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int n,ara[1000002];
int main()
{
    FastRead
    cin>>n;
    for(int i=0;i<n;i++) cin>>ara[i];
    int dead=0,mn=INT_MAX;
    for(int i=n-1;i>=0;i--)
    {
        if(i>=mn) dead++;
        mn=min(mn,i-ara[i]);
    }
    cout<<n-dead<<"\n";
}
