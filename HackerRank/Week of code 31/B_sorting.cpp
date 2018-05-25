#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[100005];
    int n,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j=0;j<n;j++) cin>>ara[j];
        for(int j=0;j<n-1;j++)
        {
            if(ara[j]>ara[j+1] && abs(ara[j]-ara[j+1])==1) swap(ara[j],ara[j+1]);
        }
        int flag=0;
        for(int j=0;j<n-1;j++)
        {
            if(ara[j]>ara[j+1]) flag=1;
        }
        if(flag) cout<<"No\n";
        else cout<<"Yes\n";
    }
}
