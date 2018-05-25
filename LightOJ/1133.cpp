#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,x,y,z,t,ara[1000];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;
        for(j=0;j<n;j++) cin>>ara[j];
        char ch;
        for(j=0;j<m;j++)
        {
            cin>>ch;
            if(ch=='S')
            {
                cin>>x;
                for(int k=0;k<n;k++) ara[k]+=x;
            }
            if(ch=='M')
            {
                cin>>x;
                for(int k=0;k<n;k++) ara[k]*=x;
            }
            if(ch=='D')
            {
                cin>>x;
                for(int k=0;k<n;k++) ara[k]/=x;
            }
            if(ch=='R') reverse(ara,ara+n);
            if(ch=='P')
            {
                cin>>y>>z;
                swap(ara[y],ara[z]);
            }
        }
        cout<<"Case "<<i<<":\n";
        for(j=0;j<n;j++)
        {
            if(j==n-1) cout<<ara[j];
            else cout<<ara[j]<<" ";
        }
        cout<<"\n";
    }
}
