// Use long long always

#include<bits/stdc++.h>
#define LL long long
#define FastRead ios_base::sync_with_stdio(0); cin.tie(nullptr);
using namespace std;
int ara2[5],ara[200005];
int main()
{
    FastRead
    int n,one,two;
    cin>>n>>one>>two;
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        cin>>ara[i];
        ara2[ara[i]]++;
    }
    ara2[1]=ara2[1]-one;
    if(ara2[1]<=0) x=1;
    ara2[2]=ara2[2]-two;
     if(ara2[2]<0)
    {
        two=abs(ara2[2]);
        if(x==0)ara2[1]=ara2[1]-(two*2);
    }
    if(ara2[1]<=0 && ara2[2]<=0)
    {
        cout<<0<<"\n";
    }
    else if(ara2[1]>0 && ara2[2]>0)
    {
        cout<<ara2[1]+(ara2[2]*2)<<"\n";
    }
    else if(ara2[1]>0)
    {
        cout<<ara2[1]<<"\n";
    }
    else cout<<(ara2[2]*2)<<"\n";
}
