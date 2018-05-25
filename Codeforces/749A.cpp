#include<bits/stdc++.h>
#define LL long long
using namespace std;
int mx = 100000;
bool stat[100001];
vector<LL>prime;
void sieve()
{
    int i,j,sq=sqrt(mx);
    for(i=4;i<=mx;i+=2)stat[i]=1;

    for(i=3;i<=sq;i+=2)
    {
        if(stat[i]==0)
        {
            for(j=i*i;j<=mx;j+=2*i)stat[j]=1;
        }
    }
    for(i=2;i<=mx;i++)
    {
        if(stat[i]==0)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    LL i,j,n,x,y,z;
    cin>>n;
    if(n%2==0)
    {
        x=n/2;
        cout<<x<<"\n";
        for(i=0;i<x;i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        x=(n/2)-1;
        cout<<x+1<<"\n";
        for(i=0;i<x;i++)
        {
            cout<<2<<" ";
        }
        cout<<3;
    }
}
