// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define ff first
#define ss second
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;

int main()
{
    FastRead
    LL n,tot[100005],rem[100005];
    LL cola=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>rem[i];
        cola+=rem[i];
    }
    for(int i=0;i<n;i++) cin>>tot[i];
    sort(tot,tot+n);
    LL avail=(tot[n-1]+tot[n-2]);
    if(avail>=cola) cout<<"YES\n";
    else cout<<"NO\n";

}
