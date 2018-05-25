#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,y,nim=0,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        nim=0;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>x>>y;
            nim^=(y-x-1);
        }
        if(nim) cout<<"Case "<<i<<": Alice\n";
        else cout<<"Case "<<i<<": Bob\n";
    }
}
