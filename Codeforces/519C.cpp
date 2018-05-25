#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    if(n*2<x) cout<<n<<"\n";
    else if(x*2<n) cout<<x<<"\n";
    else cout<<(x+n)/3<<"\n";
}
