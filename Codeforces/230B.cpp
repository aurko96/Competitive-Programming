#include<bits/stdc++.h>
using namespace std;
long long mx = 1000000;
bool stat[1000005];

void sieve()
{
    long long i,j,sq=sqrt(mx);
    stat[0]=1;
    stat[1]=1;
    for(i=4;i<=mx;i+=2)
    {
        stat[i]=1;
    }
    for(i=3;i<=1000;i+=2)
    {
        if(stat[i]==0)
        {
            for(j=i*i;j<=mx;j+=2*i)
            {
                stat[j]=1;
            }
        }
    }
}
int main()
{
    sieve();
    long long a[100005],i,n,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        x=sqrt(a[i]);
        if(x*x==a[i] && stat[x]==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

}
