#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    LL i,j,n,x,y,z;
    LL ara[10005];
    ara[1]=1;
    ara[2]=4;
    for(i=1,j=4;i<=10000;i++,j++)
    {
        if(i%3==0 && i!=0) j++;
        ara[i+2]=ara[(i+2)-1]+j;
        //cout<<ara[i+2]<<" "<<j<<endl;

    }
    //for(i=1;i<=10;i++) cout<<ara[i]<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        cout<<ara[x]<<"\n";
    }
}
