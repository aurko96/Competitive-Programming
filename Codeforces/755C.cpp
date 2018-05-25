#include<bits/stdc++.h>
#define LL long long
using namespace std;
int ara[10005],ara2[10005];
int main()
{
    int i,j,n,x,y,z,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        ara2[ara[i]]++;
        //cout<<i<<" "<<ara2[i]<<endl;
    }
    //cout<<ara2[3]<<endl;
    int mx=0;
    for(i=1;i<=10001;i++)
    {
        mx=max(mx,ara2[i]);
    }
    cout<<mx<<"\n";
}
