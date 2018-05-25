#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        double y,z;
        cin>>x>>y;
        int w;
        z=(y*x);
        w=ceil(z);
       // cout<<z<<" "<<w<<endl;
        int cnt=0;
        for(int j=0;j<x;j++)
        {
            int p;
            cin>>p;
            if(p>=50) cnt++;
        }
        if(cnt>=w) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
