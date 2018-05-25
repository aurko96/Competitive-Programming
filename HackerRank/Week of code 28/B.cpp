#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,k,t,n,x,y,z;
    cin>>t;
    LL ara[105];
    while(t--)
    {
        cin>>x;
        y=x;
        j=0;
        memset(ara,-1,sizeof(ara));
        while(y)
        {
            if(y%2==0) ara[j++]=0;
            else ara[j++]=1;
            y/=2;
        }
        k=j;
        //reverse(ara,ara+j);
        for(i=0;i<k;i++)
        {
            if(ara[i]==0) ara[i]=1;
            else if(ara[i]==1) ara[i]=0;
        }
        z=0;
        for(i=0;i<k;i++)
        {
            z+=(ara[i]*(1LL<<i));
        }
        cout<<z<<"\n";
    }
}
