#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,x,y=0,z;
    cin>>n>>x;
    int ara[1000],ara2[1000];
    memset(ara,0,sizeof(ara));
    memset(ara2,0,sizeof(ara2));
    if(n==1 && x==0) { cout<<0<<" "<<0<<endl; return 0; }
    if(x==0){ cout<<-1<<" "<<-1<<endl; return 0; }
    if(n*9<x) { cout<<-1<<" "<<-1<<endl; return 0; }
    for(i=0;i<n;i++)
    {
        z=min(x,9);
        ara[i]+=z;
        x-=z;
        if(x==0) break;
    }
    sort(ara,ara+n);
    for(i=0;i<n;i++) ara2[i]=ara[i];
    reverse(ara2,ara2+n);
    if(ara[0]==0)
    {
        for(i=0;i<n;i++)
        {
            if(ara[i])
            {
                ara[i]--;
                ara[0]=1;
                break;
            }
        }
    }
    for(i=0;i<n;i++) cout<<ara[i];
    cout<<" ";
    for(i=0;i<n;i++) cout<<ara2[i];
}
