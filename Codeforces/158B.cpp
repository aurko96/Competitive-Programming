#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[100005],i,j,n,x,y=0,z,taxi=0;
    memset(ara,0,sizeof(ara));
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        ara[x]++;
    }
    taxi+=ara[4];
    taxi+=(ara[2]/2);
    if(ara[2]%2!=0)
    {
        y++;
        ara[1]-=2;
    }
    taxi+=y;
    taxi+=ara[3];
    if(ara[1]>ara[3]) ara[1]-=ara[3];
    else if(ara[1]<=ara[3] && ara[1]>=0) ara[1]=0;
    if(ara[1]<0) ara[1]=0;
    z=ara[1]/4;
    if(ara[1]%4!=0) z++;
    taxi+=z;
    cout<<taxi<<"\n";
}
