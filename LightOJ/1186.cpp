#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,b[105],w[105];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++) cin>>w[j];
        for(j=0;j<n;j++) cin>>b[j];
        int nim=0;
        for(j=0;j<n;j++)
        {
            nim^=(b[j]-w[j]-1);
        }
        if(nim) cout<<"Case "<<i<<": white wins\n";
        else cout<<"Case "<<i<<": black wins\n";
    }
}
