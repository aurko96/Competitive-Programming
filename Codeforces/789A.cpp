#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,y,ara[100005];
    cin>>n>>y;
    for(i=0;i<n;i++) cin>>ara[i];
    int val=0;
    for(i=0;i<n;i++)
    {
        x=ara[i]/y;
        if(ara[i]%y==0) val+=x;
        else val+=x+1;
    }
    if(val%2==0) cout<<val/2;
    else cout<<(val/2)+1;
}
