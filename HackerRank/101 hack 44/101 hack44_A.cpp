#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[10005],i,j,n,x,y,z,count=1;
    cin>>n;
    for(i=0;i<n;i++) cin>>ara[i];
    sort(ara,ara+n);
    int mx=0;
    y=ara[0];
    for(i=0;i<n-1;i++)
    {
        x=ara[i+1];
        if(x-y<=1)
        {
            count++;
            mx=max(mx,count);
        }
        else
        {
            count=1;
            y=ara[i+1];
            //cout<<y<<endl;
        }
    }
    cout<<mx<<"\n";
}
