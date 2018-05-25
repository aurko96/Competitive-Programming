#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int ara[n+1];
        for(int i=1;i<=n;i++) ara[i]=i;
        for(int i=1;i<=n;i+=2)
        {
            if(i==n) swap(ara[i],ara[i-1]);
            else swap(ara[i],ara[i+1]);
        }
        for(int i=1;i<=n;i++) cout<<ara[i]<<" ";
        cout<<"\n";
    }
}
