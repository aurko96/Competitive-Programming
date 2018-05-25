#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 && c==0 && d==0) break;
        int mx=0,mn=2e8;
        mx=max(mx,max(abs(a-c),abs(a-d)));
        mx=max(mx,max(abs(b-c),abs(b-d)));
        mn=min(mn,min(abs(a-c),abs(a-d)));
        mn=min(mn,min(abs(b-c),abs(b-d)));
        cout<<mn<<" "<<mx<<"\n";
    }
}
