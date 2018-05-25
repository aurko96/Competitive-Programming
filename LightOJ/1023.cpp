#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    int i,j,n,x,t,ara[100];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>x;
        for(j=0;j<n;j++) ara[j]=j;
        cout<<"Case "<<i<<":\n";
        while(x--)
        {
            for(j=0;j<n;j++) cout<<(char)(ara[j]+'A');
            cout<<"\n";
            if(!next_permutation(ara,ara+n)) break;
        }
    }
}
