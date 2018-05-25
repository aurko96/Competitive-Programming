#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    int i,n,x,y,ara[1000];
    cin>>n;
    for(i=0;i<n;i++) cin>>ara[i];
    for(i=0;i<n;i++)
    {
        if(ara[i]<38) cout<<ara[i]<<"\n";
        else
        {
            y=ara[i]%5;
            if(y==3) cout<<ara[i]+2<<"\n";
            else if(y==4) cout<<ara[i]+1<<"\n";
            else cout<<ara[i]<<"\n";
        }
    }
}
