#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL a[100005],i,n,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        while(a[i]%2==0) a[i]/=2;
        while(a[i]%3==0) a[i]/=3;
    }
    for(i=0;i<n-1;i++) if(a[i]!=a[i+1]) flag=1;
    if(flag) cout<<"No";
    else cout<<"Yes";
}
