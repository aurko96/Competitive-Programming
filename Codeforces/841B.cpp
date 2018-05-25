#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    FastRead
    int n;
    cin>>n;
    LL ara[n+1];
    for(int i=0;i<n;i++) cin>>ara[i];
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        if(ara[i]%2!=0) flag=1;
    }
    if(flag) cout<<"First\n";
    else cout<<"Second\n";
}
