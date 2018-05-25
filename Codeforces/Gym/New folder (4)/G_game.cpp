#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,ara[100],t;
    cin>>t;
    for(i=0;i<t;i++) cin>>ara[i];
    for(i=0;i<t;i++)
    {
        if(ara[i]==1) cout<<"Bob\n";
        else cout<<"Alice\n";
    }
}
