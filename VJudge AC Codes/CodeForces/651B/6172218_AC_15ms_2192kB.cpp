#include<bits/stdc++.h>
int a[2000];
using namespace std;
int main()
{
    int i,n,x,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(i=1;i<=1000;i++)
    {
        if(a[i]>count)
        {
            count=a[i];
            //cout<<a[i]<<endl;
        }
    }
    //cout<<count<<endl;
    cout<<n-count;
}
