#include<bits/stdc++.h>
using namespace std;
bool ara2[500005];
int main()
{
    int i,j,n,x,y,ara[500005],mx=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mx=max(mx,ara[i]);
    }
    sort(ara,ara+n);
    y=n;
    //for(i=0;i<n;i++) cout<<ara[i]<<" ";
    int cnt=0;
    for(i=n/2-1,j=y-1;i>=0;i--)
    {
        if(ara[i]<=ara[j]/2){ cnt++; j--;}
    }
    cout<<n-cnt<<"\n";
}
